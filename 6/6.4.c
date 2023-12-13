#include <stdio.h>
#include <math.h>
int main(void)
{
    const double ANSWER = 3.14159265358979323846;
    double response;

    printf("what is the value of pi\n");
    scanf("%lf",&response);
    while (fabs(response - ANSWER) > 0.00001)
    {
        printf("try again\n");
        scanf("%lf",&response);
    }
    printf("close enough");
    return 0;
}