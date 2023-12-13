#include <stdio.h>

int main (void)
{
	int count;
	char ch;

	printf ("Enter words: \n");
	while (getchar () != EOF)
	{
		count ++;
		ch = getchar ();
	}
	if (ch != '\n')
	{
		printf ("\n%d\n", count);
	}else
	{
		printf ("%d\n", count);
	}

	return 0;
}
