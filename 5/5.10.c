#include <stdio.h>

int main(void)
{
    double n = 0;
    size_t doublesize;
    doublesize = sizeof (double);
    printf("n= %f, n has %zd bytes; all doubles have %zd bytes\n",n,sizeof n,doublesize);
    return 0;
}