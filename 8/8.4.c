#include <stdio.h>

int main (void)
{
	int guess = 1;

	printf ("Pick an integer from one to 100. I'll try to guess it. \n");
	printf ("Respond with a y if my guess is right and with an n if it's wrong. \n");
	printf ("Uh... is it %d? \n", guess);
	while (getchar () != 'y')
	{
		printf ("Well, Is it %d? \n", ++guess);
	}
	printf ("I knew i could do it.\n");

	return 0;
}
