#include <stdio.h>

int main (void)
{
	char response;
	int guess = 1;

	printf ("Pick a number from 1 to 100, I'll try to guess. \n");
	printf ("Respond with a 'y' if my guess is right and with an 'n' if my guess is wrong. \n");
	printf ("Well, is it %d? \n", guess);
	while ((response = getchar ()) != 'y')
	{
		if (response == 'n')
		{
			printf ("While, then, is it bigger or smaller? \n");
			printf ("Enter a 'b' if it's bigger, and an 's' if it's smaller. \n"); 
			response = getchar ();
			if (response == 's')
			{
				guess = guess * 2;
				continue;
			}else if (response == 'b')
			{
				guess = guess / 2;
				continue;
			}
		}else
		{
			printf ("Sorry, I only understand 'y' and 'n'. \n");
		}
		while (getchar () != '\n')
		{
			continue;
		}
	}
	return 0;
}
