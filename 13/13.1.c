#include <stdio.h>
#include <stdlib.h>
int main (int argc, char * argv[])
{
	int ch;
	FILE * fp;
	unsigned long count = 0;

	if (argc != 2)
	{
		printf ("usage: %s filename\n", argv[0]);
		exit (EXIT_FAILURE);
	}
	else;

	if (!(fp = fopen(argv[1], "r")))
	{
		printf ("can't open %s\n", argv[1]);
		exit (EXIT_FAILURE);
	}
	else;

	while ((ch = getc(fp)) != EOF)
	{
		putc (ch, stdout);
		count ++;
	}

	if (fclose(fp))
	{
		printf("error in closing file %s\n", argv[1]);
	}
	else;

	printf ("file %s has %lu characters\n", argv[1], count);

	return 0;
}
