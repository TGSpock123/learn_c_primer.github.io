#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <windows.h>
#include <tchar.h>
#include <strsafe.h>
#else
#include <dirent.h>
#endif

// 定义文件路径的最大长度
#define MAX_PATH_LENGTH 256

// 定义每行代码的最大长度
#define MAX_LINE_LENGTH 1024

// 函数声明
int count_lines_in_file(const char *filename);
int count_lines_in_folder(const char *folder_path);

int main() {
  // 文件夹路径
  const char *folder_path = "/Users/tgspo/Documents/GitHub";

  // 统计文件夹中的代码行数
  int total_lines = count_lines_in_folder(folder_path);

  // 打印总行数
  printf("Total Lines: %d\n", total_lines);

  return EXIT_SUCCESS;
}

// 函数实现：统计文件夹中的代码行数（递归）
int count_lines_in_folder(const char *folder_path) {
  // 用于拼接文件路径的缓冲区
  char file_path[MAX_PATH_LENGTH];

  // 记录总行数
  int total_lines = 0;

#ifdef _WIN32
  // 在Windows平台下使用FindFirstFile和FindNextFile函数进行文件夹遍历
  WIN32_FIND_DATA ffd;
  HANDLE hFind = INVALID_HANDLE_VALUE;
  TCHAR szDir[MAX_PATH];
  StringCchCopy(szDir, MAX_PATH, folder_path);
  StringCchCat(szDir, MAX_PATH, TEXT("\\*"));

  hFind = FindFirstFile(szDir, &ffd);
  if (INVALID_HANDLE_VALUE == hFind) {
    printf("Unable to open folder: %s\n", folder_path);
    return -1;
  }

  do {
    if (ffd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
      if (strcmp(ffd.cFileName, ".") != 0 && strcmp(ffd.cFileName, "..") != 0) {
        // 递归调用统计子文件夹中的代码行数
        StringCchCopy(szDir, MAX_PATH, folder_path);
        StringCchCat(szDir, MAX_PATH, TEXT("\\"));
        StringCchCat(szDir, MAX_PATH, ffd.cFileName);
        total_lines += count_lines_in_folder(szDir);
      }
    } else {
      // 统计C语言文件中的行数
      if (strstr(ffd.cFileName, ".c") != NULL) {
        StringCchCopy(szDir, MAX_PATH, folder_path);
        StringCchCat(szDir, MAX_PATH, TEXT("\\"));
        StringCchCat(szDir, MAX_PATH, ffd.cFileName);
        int lines_in_file = count_lines_in_file(szDir);
        printf("File: %s, Lines: %d\n", ffd.cFileName, lines_in_file);
        total_lines += lines_in_file;
      }
    }
  } while (FindNextFile(hFind, &ffd) != 0);

  FindClose(hFind);
#else
  // 在非Windows平台下使用dirent.h进行文件夹遍历
    DIR *folder = opendir(folder_path);

    // 检查文件夹是否成功打开
    if (folder == NULL) {
        perror("Unable to open folder");
        return -1;
    }

    // 读取文件夹中的文件和子文件夹
    struct dirent *entry;
    while ((entry = readdir(folder)) != NULL) {
        // 忽略 "." 和 ".."
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }

        // 构建文件路径
        snprintf(file_path, MAX_PATH_LENGTH, "%s/%s", folder_path, entry->d_name);

        // 检查是否为子文件夹
        #ifdef _DIRENT_HAVE_D_TYPE
        if (entry->d_type == DT_DIR) {
        #else
        if (entry->d_type == DT_UNKNOWN) {
            // 如果d_type未知，使用stat函数获取文件类型信息
            struct stat statbuf;
            if (stat(file_path, &statbuf) == -1) {
                perror("stat");
                continue;
            }
            if (S_ISDIR(statbuf.st_mode)) {
        #endif
            // 递归调用统计子文件夹中的代码行数
            total_lines += count_lines_in_folder(file_path);
        } else if (entry->d_type == DT_REG) {
            // 统计C语言文件中的行数
            if (strstr(entry->d_name, ".c") != NULL) {
                int lines_in_file = count_lines_in_file(file_path);
                printf("File: %s, Lines: %d\n", entry->d_name, lines_in_file);
                total_lines += lines_in_file;
            }
        }
    }

    // 关闭文件夹
    closedir(folder);
#endif

  return total_lines;
}

// 函数实现：统计文件中的行数
int count_lines_in_file(const char *filename) {
  // 打开文件
  FILE *file = fopen(filename, "r");
  if (file == NULL) {
    perror("Unable to open file");
    return -1;
  }

  // 计数器
  int line_count = 0;

  // 缓冲区，用于读取每行的内容
  char line[MAX_LINE_LENGTH];

  // 逐行读取文件内容
  while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
    // 如果该行不是空行或注释行，则增加计数器
    if (strlen(line) > 1 && line[0] != '/' && line[1] != '/') {
      line_count++;
    }
  }

  // 关闭文件
  fclose(file);

  return line_count;
}
