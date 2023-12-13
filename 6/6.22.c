#include <stdio.h>

int main(void)
{
    const int secret_code = 13;
    int code_entered;

    do
    {
    printf("to enter the magic club,\n");
    printf("please enter the secret code number:  ");
    scanf("%d",&code_entered);
    }
    while(code_entered != secret_code);
    printf("welcome\n");

    return 0;
}