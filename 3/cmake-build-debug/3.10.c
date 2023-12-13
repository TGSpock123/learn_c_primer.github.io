#include <stdio.h>
int main(void)
{
    printf("type int has a size of %zd bytes\n", sizeof(int));
    printf("type char has a size of %zd bytes\n", sizeof(char));
    printf("type long has a size of %zd bytes\n", sizeof(long ));
    printf("type long long has a size of %zd bytes\n", sizeof(long long));
    printf("type double has a size of %zd bytes\n", sizeof(double));
    printf("type long double has a size of %zd bytes\n", sizeof(long double));
    printf("type bool has a size of %zd bytes\n", sizeof(_Bool));
    printf("type float has a size of %zd bytes\n", sizeof(float));
    printf("type complex has a size of %zd bytes\n", sizeof(_Complex));
    return 0;
}