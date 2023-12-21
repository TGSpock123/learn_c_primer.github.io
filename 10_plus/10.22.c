#include <stdio.h>
#include "10.21_22.h"
int sum (const int ar[], int n)
{
	int i;
	int total = 0;

	for (i = 0; i < n; i ++)
	{
		total += ar[i];
	}

	return total;
}
int sum2d (const int ar[][COLS], int rows)
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
