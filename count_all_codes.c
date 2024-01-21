#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

// 定义文件路径的最大长度
#define MAX_PATH_LENGTH 256

// 定义每行代码的最大长度
#define MAX_LINE_LENGTH 1024

// 函数声明
int count_lines_in_file(const char *filename);
int count_lines_in_folder(const char *folder_path);

int main() {
    // 文件夹路径
    const char *folder_path = "/Users/tgspock/Documents/GitHub";

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

    // 打开文件夹
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
        if (entry->d_type == DT_DIR) {
            // 递归调用统计子文件夹中的代码行数
            total_lines += count_lines_in_folder(file_path);
        } else if (strstr(entry->d_name, ".c") != NULL) {
            // 统计C语言文件中的行数
            int lines_in_file = count_lines_in_file(file_path);
            printf("File: %s, Lines: %d\n", entry->d_name, lines_in_file);

            // 累加总行数
            total_lines += lines_in_file;
        }
    }

    // 关闭文件夹
    closedir(folder);

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
