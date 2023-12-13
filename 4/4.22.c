#include <stdio.h>

int main(void)
{
    float dw_s;
    float fl_s;
    float time;
    printf("scaning dowing speed and file size ...\n");
    scanf("%f %f",&dw_s,&fl_s);
    time = fl_s / dw_s * 8;
    printf("at %.2f Mb per second, a file of %.2f MB\ndownloading in %.2f seconds\n",dw_s,fl_s,time);
    return 0;
}