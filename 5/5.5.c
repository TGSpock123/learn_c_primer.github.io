#include <stdio.h>
#define SQ 64
int main(void)
{
    const double CROP = 2E16;
    double current, total;
    int count = 1;
    printf("square    grains     total     fraction of\n"
           "          added      grains    world total\n");
    total = current = 1.0;
    printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/CROP);
    while (count <SQ)
    {
        count = count + 1;
        current = 2 * current;
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/CROP);
    }
    printf("that,s all");
    return 0;
}