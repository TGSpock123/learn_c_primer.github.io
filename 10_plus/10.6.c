#include <stdio.h>
#include "10.6_32.h"
int main (void)
{
    const float rain[YEARS][MONTHS] =
            {
                    {
                        4.3, 4.3, 4.3,3.0, 2.0, 1.2,
                        0.2, 0.2, 0.4,2.4, 3.5, 6.6
                    },
                    {
                        8.5, 8.2, 1.2,1.6, 2.4, 0.0,
                        5.2, 0.9, 0.3,0.9, 1.4, 7.3
                    },
                    {
                        9.1, 8.5, 6.7, 4.3, 2.1, 0.8,
                        0.2, 0.2, 1.1, 2.3, 6.1, 8.4
                    },
                    {
                        7.2, 9.9, 8.4, 3.3, 1.2, 0.8,
                        0.4, 0.0, 0.6, 1.7, 4.3, 6.2
                    },
                    {
                        7.6, 5.6, 3.8, 2.8, 3.8, 0.2,
                        0.0, 0.0, 0.0, 1.3, 2.6, 5.2
                    }
            };
    float subtot, total;

    printf ("YEAR     RAINFALL  (inches)\n");
    avry (rain, &total, &subtot);
    printf ("\nThe yearly average is %.1f inches. \n\n", total / YEARS);
    printf ("MONTHLY AVERAGES: \n");
    printf ("Jan   Feb   Mar   Apr   May   Jun   Jui   Aug   Sep   Oct   Nov   Dec \n");
    avrm(rain, &subtot);
    printf ("\n");

    return 0;
}
