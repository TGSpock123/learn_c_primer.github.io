#include <stdio.h>
void up_and_down(int);

int main (void)
{
	up_and_down (1);

	return 0;
}
void up_and_down (int n)
{
	int i;
	for (i = n; i > 0; i --)
		putchar ('*');
	putchar ('\n');
	if (n < 4)
	{
		up_and_down (n + 1);
	}
	for (i = n; i > 0; i --)
		putchar ('*');
	putchar ('\n');
}
