#include "s_gets.h"
int main (void)
{
    char ch[5], ch2[5];

    printf ("Please enter an array. \n");
    s_gets (ch, 5);
    printf ("Please enter another array. \n");
    s_gets (ch2, 5);
    printf ("strcmp (\"%s\" and \"%s\") is %d. \n", ch, ch2, strcmp (ch, ch2));

    return 0;
}