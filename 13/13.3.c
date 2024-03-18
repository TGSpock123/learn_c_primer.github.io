#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void)
{
	FILE * fp;
	char word[MAX];

	//fopen()第二个参数作用: 
	//单独使用r时为只读, 单独使用w或a时为只写. 
	//r+会把指针摆到开头写, w+会把文件清空写, a+会接着文件屁股写. 
	//例如 源文件: 012345678  输入:910jq   
	//r+输出: 910jq5678  w+输出: 910jq  a+输出: 012345678910jq  
	if(!(fp = fopen("wordy", "a+")))
	{
		fprintf(stdout, "Can't open \"wordy\" file. \n");
		exit(EXIT_FAILURE);
	}
	else;

	puts("Enter words to add to the file; press the #");
	puts("key at the beginning of a line to terminate.");

	while((fscanf(stdin, "%40s", word)) && (word[0] != '#'))
	{
		fprintf(fp, "%s\n", word);
	}

	puts("File contents: ");
	rewind(fp);

	while(fscanf(fp, "%s", word) == 1)
	{
		puts(word);
	}

	if (fclose(fp))
	{
		fprintf(stderr, "error closing file\n");
	}
	else;

	return 0;
}