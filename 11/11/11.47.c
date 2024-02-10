#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[])
{
	double di = 1;
    int temp, zhi = atoi (argv[2]);

    if (argc != 3)
    {
        printf ("enter correct numbers, please. \n");
        return 0;
    }
    if (zhi == 0)
    {
        printf ("%f's 0 power is 1. \n", di);
    }
    for (temp = 0; temp < (zhi > 0 ? zhi : (zhi * -1)); temp ++)
    {
        di *= atof (argv[1]);
    }
    if (zhi < 0)
    {
        di = 1/ di;
    }
    printf ("%g's %d power is %g. \n", atof (argv[1]), zhi, di);

	return 0;
}
