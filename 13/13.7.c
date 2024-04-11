#include "s_gets.h"
#define BUFSIZE 4096
#define SLEN 81
void append(FILE * source, FILE * dest);

int main(void)
{
	FILE * fa, * fs;
	int file = 0;
	char file_app[SLEN];
	char file_src[SLEN];
	int ch;

	puts("Enter name of the destination file: ");
	s_gets(file_app, SLEN);
	if((fa = fopen(file_app, "a+")) == NULL)
	{
		fprintf(stderr, "Can't open %s\n", file_app);
		exit(EXIT_FAILURE);
	}else;

	if(setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
	{
		fputs("Can't create output buffer\n", stderr);
		exit(EXIT_FAILURE);
	}else;

	puts("Enter name of first source file (empty to quit): ");

	while(s_gets(file_src, SLEN) && file_src[0] != '\0')
	{
		if(strcmp(file_src, file_app) == 0)
		{
			fputs("Can't append file to itself\n", stderr);
		}else if((fs = fopen(file_src, "r")) == NULL)
		{
			fprintf(stderr, "Can't open %s\n", file_src);
		}else
		{
			if(setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
			{
				fputs("Can't create input buffer\n", stderr);
				continue;
			}else;

			append(fs, fa);

			if(ferror(fs) != 0)
			{
				fprintf(stderr, "Error inreadind file %s. \n", file_src);
			}

			if(ferror(fa) != 0)
			{
				fprintf(stderr, "Error inreadind file %s. \n", file_src);
			}

			fclose(fs);
			file++;
			printf("File %s appened. \n", file_src);
			puts("Next file (empty to quit): ");
		}
	}

	printf("Done appending. %d files appended. \n", file);
	rewind(fa);
	printf("%s contents: \n", file_app);

	while((ch = getc(fa)) != EOF)
	{
		putchar(ch);
	}

	puts("Done displaying.");
	fclose(fa);

	return 0;
}

void append(FILE * source, FILE * dest)
{
	size_t bytes;
	static char temp[BUFSIZE];

	while((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
	{
		fwrite(temp, sizeof(char), bytes, dest);
	}
	

	/*
	char ch;

	while ((ch = fgetc(source)) != EOF)
	{
		fputc(ch, dest); 
	}
	*/
}
