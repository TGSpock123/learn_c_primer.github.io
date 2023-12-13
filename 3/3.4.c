#include <stdio.h>

int main(void)
{

    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678901234567890;
    printf("un = %u and not %d\nend = %hd and %d\nbig = %ld and not %hd\nvery big = %lld and not %ld\n",un,un,end,end,big,big,verybig,verybig);
    return 0;
}