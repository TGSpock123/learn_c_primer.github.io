#include <stdio.h>
#include "9.14_15.h"
int main (void)
{
	int pooh = 2, bah = 5;

	printf ("In main (), pooh = %d and &pooh = %p. \n", pooh, &pooh);
	printf ("In main (), bah = %d and &bah = %p. \n", bah, &bah);
	mikado (pooh);

	return 0;
}
