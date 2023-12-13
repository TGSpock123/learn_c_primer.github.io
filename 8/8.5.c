#include <stdio.h>

int main (void)
{
	int guess = 1;
	char response;

	printf ("Pick an integer from one to 100. I'll try to guess it. \n");
	printf ("Respond with a y if my guess is right and with an n if it's wrong. \n");
	while ((response = getchar()) != 'y')
	{
		if (response == 'n')
			printf ("Well, is it %d? \n", ++guess);
		else 
			printf ("Sorry, I only understand y and n.\n");
		while (getchar() != '\n')
			continue;
	}
	printf ("I knew I can do it. \n");

	return 0;
}
