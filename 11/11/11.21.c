#include "s_gets.h"
#define ANSWER "Grant"
#define SIZE 40
int main (void)
{
    char try[SIZE];
    int i = 1;

    puts ("Who is buried in Grant's tomb? ");
    do
    {
        s_gets(try, SIZE);
        if (strcmp (ANSWER, try))
        {
            (i == 3) ? puts ("No, that's wrong. "): puts ("No, that's wrong. Try again. ");
        }else {
            puts("That's right!");
            break;
        }
        i ++;
    }
    while (i <= 3);

    return 0;
}