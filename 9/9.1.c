#include <stdio.h>
#define NAME "GIGATHINK, INC. "
#define ADRESS "101 Megabuck pizza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
void starbar (int nm);

int main (void)
{
	int num = WIDTH;
	starbar (num);
	printf ("%s\n", NAME);
	printf ("%s\n", ADRESS);
	printf ("%s\n", PLACE);
	starbar (num);

	return 0;
}
void starbar (int nm)
{
	int count;

	for (count = 1; count <= nm; count ++)
	{
		putchar ('*');
	}
	putchar ('\n');
}
