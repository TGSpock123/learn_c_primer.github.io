#include <stdio.h>
#include "10.17_18.h"
void sum_rows (int ar[][COLS], int rows)
{
	int r;
	int c;
	int tot;

	for (r = 0; r < rows; r ++)
	{
		tot = 0;
		for (c = 0; c < COLS; c ++)
		{
			tot += ar[r][c];
		}
		printf ("row %d: sum = %d\n", r, tot);
	}
}
void sum_cols (int ar[][COLS], int rows)
{
	int r;
	int c;
	int tot;

	for (c = 0; c < COLS; c ++)
	{
		tot = 0;
		for (r = 0; r < rows; r ++)
		{
			tot += ar[r][c];
		}
		printf ("col %d: sum = %d\n", c, tot);
	}
}
int sum2d (int ar[][COLS], int rows)
{
	int r;
	int c;
	int tot = 0;

	for (r = 0; r < rows; r ++)
	{
		for (c = 0; c < COLS; c ++)
		{
			tot += ar[r][c];
		}
	}

	return tot;
}
