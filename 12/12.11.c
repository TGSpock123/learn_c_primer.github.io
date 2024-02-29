#include <stdio.h>
#include <time.h>
static unsigned long int next;

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
    srand0 ((unsigned int) time (0));
    for (int count = 0; count < 10; count ++)
    {
        printf ("%u\n", (rand0() % 6) + 1);
    }

    return 0;
}