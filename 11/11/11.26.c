#include <stdio.h>
#include <string.h>
#define WORD "beast"
#define SIZE 40
int main (void)
{
    const char * orig = WORD;
    char copy[SIZE] = "Be the best you can be.";
    char * ps;

    puts (copy);
    ps = strcpy (copy + 7, orig);
    puts (copy);

    return 0;
}