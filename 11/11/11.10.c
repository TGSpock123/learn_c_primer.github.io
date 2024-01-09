#include <stdio.h>
int main (void)
{
	char words[10];
	int i = 0;

	puts ("Enter strings(empty line to quit):");
	while (fgets (words, 10, stdin) != NULL && words[0] != '\n')
	{
		while (words[i] != '\n' && words[i] != '\0')
		{
			i ++;
		}
		if (words[i] == '\n')
		{
			words[i] = '\0';
		}else
		{
			while (getchar() != '\n')
			{
				continue;
			}
		}
		puts (words);
	}
	puts ("done");

	return 0;
}
