#include <stdio.h>

int main(void)
{
    int ture_val, false_val;
    ture_val = (0 < 1);
    false_val = (0 == 1);
    printf("ture is %d, false is %d.\n",ture_val,false_val);
    return 0;
}