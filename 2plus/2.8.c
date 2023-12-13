#include <stdio.h>
void br();
void ic();

int main()
{
    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();

    return 0;
}
void ic(void)
{
    printf("India,China");
}
void br(void)
{
    printf("Brazil,Russia");
}