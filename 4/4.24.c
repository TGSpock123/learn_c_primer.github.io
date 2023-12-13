#include <stdio.h>
#include <float.h>
int main(void)
{
    double asd;
    float asdf;
    asd = 1.0 / 3.0;
    asdf = 1.0 / 3.0;
    printf("%.6f %.12f %.16f\n",asd,asd,asd);
    printf("%d\n",FLT_DIG);
    printf("%.6f %.12f %.16f\n",asdf,asdf,asdf);
    printf("%d\n",DBL_DIG);
    return 0;
}