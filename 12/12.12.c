#include "12.12_13.h"
int main (void)
{
    int dice, roll, sides, status;

    srand ((unsigned int) time (0));
    printf ("enter the number of sides per die, 0 to stop: \n");
    while (scanf("%d", &sides) && sides > 0)
    {
        printf ("how many dice? \n");
        if ((status = scanf ("%d", &dice)) != 1)
        {
            if (status == EOF)
            {
                break;
            }else
            {
                printf ("you should have enter an integer. let's begin again.\n");
                while (getchar() != '\n');
                printf ("how many sides? enter 0 to stop. \n");
                continue;
            }
        }
        roll = roll_n_dice (dice, sides);
        printf ("you have rolled a %d using %d %d-sided dice. \n", roll, dice, sides);
        printf ("how many sides? enter 0 to stop. \n");
    }
    printf ("the rollem() function has called %d times. \n", roll_count);
    printf ("good fortune to you. \n");

    return 0;
}