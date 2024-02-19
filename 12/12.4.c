#include <stdio.h>
//extern 使用方法
void swe (void);
int main (void)
{
    extern int coal;

    printf ("%d\n", coal);
    swe();

    return 0;
}