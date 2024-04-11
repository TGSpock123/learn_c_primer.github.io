#include "s_gets.h"
#define LENG 300
int main(int argc, char* argv[])
{
	FILE* fp;
	char buffer[LENG];
	char ch;
	int j;
	long int intr;

	if (argc < 2)
	{
		fprintf(stderr, "usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	else;

	if (!(fp = fopen(argv[1], "w+")))
	{
		printf("can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	printf("please enter a sentence: \n");
	s_gets(buffer, LENG);
	fwrite(buffer, sizeof(char), strlen(buffer), fp);
	intr = ftell(fp);

	printf("please enter some number, q to quit: \n");
	while(scanf("%d", &j))
	{
		fwrite(&j, sizeof(int), 1, fp);
		getchar();
	}

	rewind(fp);

	while((ch = getc(fp)) != EOF && ftell(fp) <= intr)
	{
		putc(ch, stdout);
	}

	//fseek(fp, intr, SEEK_SET);     如果第一操作没问题这步不需要. 
	putchar('\n');

	while(fread(&j, sizeof(int), 1, fp) == 1)
	{
		fprintf(stdout, "%d ", j);
	}

	fclose (fp);

	return 0;
}
