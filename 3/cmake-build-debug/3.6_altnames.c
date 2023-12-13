#include <stdio.h>
#include <inttypes.h>
int main (void)
{
    int32_t me32;     /*me32是一个32位有符号整型变量*/

    me32 = 45933945;
    printf("first,assume int_32 is int: ");
    printf("me_32 = %d\n",me32);
    printf("next, let,s not make any assumptions.\n");
    printf("instead, use a \"macro\" from inttypes.h:");
    printf("me32 = %" PRId32 "\n",me32);

    return 0;
}