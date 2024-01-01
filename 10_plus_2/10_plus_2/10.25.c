#include <stdio.h>
#include "10.25_29.h"
int main (void)
{
    int n, m;
	double source_1[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double source_2[2][7] = {{2.1, 3.4, 1.5, 4.9, 9.3, 5.2, 6.8}, {6.8, 5.2, 9.3, 4.9, 1.5, 3.4, 2.1}};
	double target_1_1 [5];
	double target_1_2[5];
	double target_1_3[5];
    double target_2_1[2][7];
    double target_2_2[3];

	copy_arr (target_1_1, source_1, 5);
	copy_ptr (target_1_2, source_1, 5);
	copy_ptrs (target_1_3, source_1, source_1 + 5);
    for (n = 0; n < 5; n ++)
    {
        printf ("source[%d] = %g, target[%d] = %g, target2[%d] = %g, target3[%d] = %g\n", n, source_1[n], n,
                target_1_1[n], n, target_1_2[n], n, target_1_3[n]);
    }
    for (n = 0; n < 2; n ++)
    {
        copy_arr(target_2_1[n], source_2[n], 7);
    }
    for (n = 0; n < 2; n ++)
    {
        for (m = 0; m < 7; m ++)
        {
            printf ("target_2_1[%d][%d] = %g \n", n, m, target_2_1[n][m]);
        }
    }
    copy_arr(target_2_2, &source_2[0][2], 3);
    for (n = 0; n < 3; n ++)
    {
        printf ("target_2_2[%d] = %g \n", n, target_2_2[n]);
    }

	return 0;
}
