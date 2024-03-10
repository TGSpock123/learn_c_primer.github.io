#include "12.19_20.h"
#define KILO "kilometers"
#define MIL "miles"
#define LITE "liters"
#define GAL "gallons"
int mode_s = 0;
double distance, fuel;
char * str1, * str2;
void set_mode (int mode)
{
    switch (mode)
    {
        case 0:
        case 1:
            mode_s = mode;
            break;
        default:
            if (mode_s == 1)
            {
                printf ("%d is invalid mode, mode 1 (us) used. \n", mode);
            }else
            {
                printf ("%d is invalid mode, mode 0 (metric) used. \n", mode);
            }
            break;
    }
}
void get_info ()
{
    if (mode_s == 1)
    {
        str1 = KILO;
        str2 = LITE;
    }else
    {
        str1 = MIL;
        str2 = GAL;
    }
    printf ("enter distance travel in %s: \n", str1);
    enter_number (&distance);
    printf ("enter ful consumption in %s: \n", str2);
    enter_number (&fuel);
}
void show_info ()
{
    if (mode_s == 1)
    {
        printf ("fuel consumption is %lf liters per 100 kilometers. \n", fuel / distance * 100);
    }else
    {
        printf ("fuel consumption is %lf miles per gallon. \n", distance/ fuel);
    }
}
void enter_number (double * dub)
{
    int clear;
    if (scanf ("%lf", dub) == 1)
    {
        while ((clear = getchar()) != '\n' && clear != EOF);
    }else
    {
        printf ("please enter the right number. \n");
        while ((clear = getchar()) != '\n' && clear != EOF);
        enter_number (dub);
    }
}