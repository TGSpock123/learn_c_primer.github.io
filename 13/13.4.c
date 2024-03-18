#include <stdio.h>
#include <stdlib.h>
#define CTRL_Z '\032'
#define SLEN 81
int main(void)
{
	char file[SLEN];
	char ch;
	FILE * fp;
	long count, last;

	fputs("Enter the name of file to be processed: \n", stdout);
	scanf("%80s", file);
	if(!(fp = fopen(file, "rb")))
	{
		printf("revers can't open %s\n", file);
		exit(EXIT_FAILURE);
	}

	fseek(fp, 0L, SEEK_END);
	last = ftell(fp);

	for (count = 1L; count <= last; count++)
	{
		fseek(fp, -count, SEEK_END);
		ch = getc(fp);
		if (ch != CTRL_Z && ch != '\r')
		{
			putchar(ch);
		}
	}

	putchar('\n');
	fclose(fp);

	return 0;
}