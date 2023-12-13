#include <stdio.h>

int main (void)
{
	char ch, cha;
	int k = 0, count = 0;

	printf ("Please print some words: \n");
	while ((ch = getchar ()) != EOF)
	{
		if ((ch <= 122 && ch >= 97) || (ch <= 90 && ch >= 65))
		{
			k ++;
			cha = ch;
		}else
		{
			if ((cha <= 122 && cha >= 97) || (cha <= 90 && cha >= 65))
			{
				count ++;
			}else
			{
				continue;
			}
		}
	}
	printf ("You have printed %d letters, %d words, average %d letters in a word.\n", k, count, k / count);

	return 0;
}
