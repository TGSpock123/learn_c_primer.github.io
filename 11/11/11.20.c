#include "s_gets.h"
#define ANSWER "Grant"
#define SIZE 40
int cmpa (char * ar1, char * ar2);// 前面是原始数组
int main (void)
{
    char try[SIZE];
    int i = 1;

    puts ("Who is buried in Grant's tomb? ");
    do
    {
        s_gets(try, SIZE);
        if (cmpa (ANSWER, try))
        {
            (i == 3) ? puts ("No, that's wrong. "): puts ("No, that's wrong. Try again. ");
        }else {
            puts("That's right!");
            break;
        }
        i ++;
    }
    while (i <= 3);

    return 0;
}
int cmpa (char * ar1, char * ar2)
{
    int p = 0;

    for (int i = 0; i < strlen (ar1); i++)
    {
        p += ar1[i];
    }
    for (int i = 0; i < strlen (ar2); i++)
    {
        p -= ar2[i];
    }

    return p;
}

/* show off from my friend.
#include <stdio.h>
#include <math.h>
int main()
{
    int c;
    printf("please put in a number:\n");
    scanf("%d", &c);

    if(c<2)
    {
        printf("error");
    }

    else
    {
    int a[c];

    for(int i = 0; i < c; i ++)
    {
        a[i] = i + 2;
    }
   for (int j=2;j<(sqrt(c)+1);j++)
   {
        for(int i=1 ;i < (sizeof (a))/(sizeof(a[0])); i++)
        {
            if( a[i] != 0 & a[i] != j & a[i] % j == 0)
            {
                 a[i] = 0;
            }
        }
   }

    for(int i=0;i < (sizeof (a))/(sizeof(a[0])) ;i++) {
        if (a[i] != 0)

            printf("%d\t", a[i]);
    }
    }
    return 0;
}
*/