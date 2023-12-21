#include <stdio.h>
#include "10.17_18.h"
int main (void)
{
	int junk[ROWS][COLS] = 
	{
		{2, 4, 6, 8},
		{3, 5, 7, 9},
		{12, 10, 8, 6}
	};

	sum_rows (junk, ROWS);
	sum_cols (junk, ROWS);
	printf ("Sum of all elements = %d\n", sum2d (junk, ROWS));

	return 0;
}
