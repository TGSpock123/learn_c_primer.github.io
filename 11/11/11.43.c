#include "11.43_44.h"
int main (void)
{
    int j, p, q = 0;
    char a[10][LENGTH];
    char * b[10];

    printf ("please enter ten sentences. \n");
    printf ("interrupt with 'cmd + d'. \n");
    for (j = 0; j < 10; j++)
    {
        printf ("now please enter the ");
        switch (j)
        {
            case 0:
                printf ("1st ");
                break;
            case 1:
                printf ("2nd ");
                break;
            case 2:
                printf ("3rd ");
                break;
            default:
                printf ("%dth ", j + 1);
                break;
        }
        printf ("sentence: \n");
        s_gets (a[j], LENGTH);
        if (strchr(a[j], EOF))
        {
            b[j] = a[j];
            q ++;
            break;
        }else;
        q ++;
        b[j] = a[j];
    }
    do
    {
        printf ("please choose a operation: \n");
        puts (OPR1);
        puts (OPR2);
        puts (OPR3);
        puts (OPR4);
        puts (QUIT);
        printf ("please enter a number for next step. \n");
        scanf ("%d", &p);
        switch (p)
        {
            case 1:
                opr_1 (a, q);
                break;
            case 2:
                opr_2 (b, q);
                break;
            case 3:
                opr_3_2 (b, q);
                break;
            case 4:
                opr_4 (b, q);
                break;
            case 5:
                break;
            default:
                printf ("please enter a number between 1 and 5. \n");
                break;
        }
    }while (p != 5);
    printf ("thank you for using. \n");

    return 0;
}
