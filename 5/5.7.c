#include <stdio.h>

int main(void)
{
    float n = 6.0;
    const float SCALE = 2.0;
    float butter;
    float butter2;
    float butter3;
    butter = 25.0 + 60.0 * n / SCALE;
    butter2 = (25.0 + 60.0) * n / SCALE;
    butter3 = (25.0 + 60.0 * n) / SCALE;
    printf("butter = %.2f butter2 = %.2f butter3 =%.2f",butter,butter2,butter3);
    return 0;
}