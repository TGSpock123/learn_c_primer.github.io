#include <stdio.h>
int main(void)
{
    int bph2o = 212;
    int rv;
    rv = printf("%d F is water's boiling point\n",bph2o);
    printf("the printf() function printed %d charaters.\n",rv);
    return 0;
}