#include <stdio.h>
static unsigned long int next = 1;

unsigned int rand0 (void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65536) % 32768; //强制转换.
}

void srand0 (unsigned int seed)
{
    next = seed;//因为next的静态属性, 这步先执行后会永远改变程序中的next值.
}

int main (void)
{
    int count;
    unsigned int seed;
    //我把原函数里的while函数转成了dowhile函数, 效果相同.
    do
    {
        printf ("please select a seed: \n");
        if (scanf ("%u", &seed) == 1)
        {
            srand0 (seed);
            for (count = 0; count < 10; count ++)
            {
                printf ("%d\n", rand0 ());
            }
        }else
        {
            break;
        }
    }while (1);
    printf ("Thank you.\n");

    return 0;
}