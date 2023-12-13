#include <stdio.h>
void jolly(void);
void deny(void);
int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}
void jolly(void)
{
    printf("jolly123\n");
}
void deny(void)
{
    printf("deny123\n");
}