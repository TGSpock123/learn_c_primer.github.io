#include "12.13_23.h"
int main (void)
{
    int sets, sides, dice;

    srand ((unsigned int) time (0));
    do
    {
        printf("enter number of sets, q to stop: \n");
        if (scanf ("%d", &sets) != 1)
        {
            break;
        }
        printf ("enter how many sides and how many dices: \n");
        scanf ("%d %d", &sides, &dice);
        for (int times = 1; times <= sets; times ++)
        {
            printf ("%5d", roll_n_dice (dice, sides));
            if (times % 10 == 0)
            {
                putchar ('\n');
            }else if (times == sets)
            {
                putchar ('\n');
            }else;
        }
    }while (1);
    printf ("done. \n");

    return 0;
}