#include <stdio.h>

int main(void)
{
    double debt;
    for (debt = 100.0; debt < 150.0; debt = debt * 1.1)
    {
        printf("your debt is %.2f now\n",debt);
    }

    return 0;
}