#include <stdio.h>
int main (void)
{
	int ref[] = {8, 4, 0, 2};
	int *ptr;
	int index;
    
	printf ("%d\n", *++ref);
	for (index = 0; index < 4; index ++, ptr ++)
	{
		printf ("%d %d %d\n", index, ref[index], *ptr);
	}

	return 0;
}
