#include <stdio.h>
int cot (char ch);

int main (void)
{
	char qwe;
	int count;

	printf ("Please enter some words: \n");
	count = cot (qwe);
	printf ("\nYou have enter %d letters.\n", count);

	return 0;
}
int cot (char ch)
{
	int coun = 0;

	while ((ch = getchar ()) != EOF)
	{
		if ((ch <= 122 && ch >= 97) || (ch <= 90 && ch >= 65))
		{
			coun ++;
			continue;
		}
	}
	
	return coun;
}
