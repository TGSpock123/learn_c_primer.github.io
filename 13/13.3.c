#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void)
{
	FILE * fp;
	char word[MAX];

	//fopen()�ڶ�����������: 
	//����ʹ��rʱΪֻ��, ����ʹ��w��aʱΪֻд. 
	//r+���ָ��ڵ���ͷд, w+����ļ����д, a+������ļ�ƨ��д. 
	//���� Դ�ļ�: 012345678  ����:910jq   
	//r+���: 910jq5678  w+���: 910jq  a+���: 012345678910jq  
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