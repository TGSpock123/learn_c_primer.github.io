#include <stdio.h>
void copy_arr (double ar[], const double m[], int n);
void copy_ptr (double * str, const double * q, int n);
void copy_ptrs (double ar[], const double * m, const double * p);
int main (void)
{
    int n;
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target[5];
	double target2[5];
	double target3[5];

	copy_arr (target, source, 5);
	copy_ptr (target2, source, 5);
	copy_ptrs (target3, source, source + 5);
    for (n = 0; n < 5; n ++)
    {
        printf ("source[%d] = %g, target[%d] = %g, target2[%d] = %g, target3[%d] = %g\n", n, source[n], n,
                target[n], n, target2[n], n, target3[n]);
    }

	return 0;
}
void copy_arr (double ar[], const double m[], int n)
{
    for (int i = 0; i < n; i ++)
    {
        ar[i] = m[i];
    }
}
void copy_ptr (double * str, const double * q, int n)
{
    for (int i = 0; i < n; i ++)
    {
        *str = *q;
        str ++;
        q ++;
    }
}
void copy_ptrs (double ar[], const double * m, const double * p)
{
    for (; m < p; m ++, ar ++)
    {
        *ar = *m;
    }
}
