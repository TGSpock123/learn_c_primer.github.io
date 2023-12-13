#include <stdio.h>
void two (unsigned long q);

int main (void)
{
	unsigned long p;

	printf ("Enter an integer (q to quit): \n");
	while (scanf ("%lu", &p) == 1)
	{
		printf ("Binary equivalent: ");
		two (p);
		putchar ('\n');
		printf ("Enter an integer (q to quit): \n");
	}
	printf ("Thank you for using. \n");

	return 0;
}
void two (unsigned long q)
{
	unsigned long f;

	f = q % 2;
	if (q >= 2)
	{
		two (q / 2);
	}
	putchar ((f == 0) ? '0' : '1');
}
