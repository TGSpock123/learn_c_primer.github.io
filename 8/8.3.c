#include <stdio.h>
#include <stdlib.h>
int main (void)
{	
	int ch;
	FILE * fp;
	char fname[50];

	printf ("Enter name of the file: \n");
	scanf ("%s", fname);
	fp = fopen (fname, "r");
	if (fp == NULL)
	{
		printf ("error: no such file or dictionary.\n");
		exit (1);
	}
	while ((ch = getc(fp)) != EOF)
		putchar (ch);
	fclose (fp);

	return 0;
}
