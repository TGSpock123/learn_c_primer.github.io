#include "s_gets.h"
#include <stdlib.h>
#define LIM 30
int main (void)
{
    char number[LIM];
    char * end;
    long value;

    puts ("Enter a number(empty line to quit):");
    while (s_gets (number, LIM) && number[0])
    {
        value = strtol (number, &end, 10);
        printf ("base 10 input, base 10 output: %ld, stopped at %s(%d)\n", value, end, *end);
        value = strtol (number, &end, 16);
        printf ("base 16 input, base 10 output: %ld, stopped at %s(%d)\n", value, end, *end);
        puts ("Next number:");
    }
    puts ("Bye.");

    return 0;
}