#include <stdio.h>
#include <ctype.h>
#define STOP '|'
int main (void)
{
    char c;
    char prev;
    long n_chars = 0L;
    int n_lines = 0;
    int n_words = 0;
    int p_lines = 0;
    _Bool inword = 0;

    printf ("enter text to be analyzed (| to quit): \n");
    prev = '\n';
    while ((c = getchar()) != STOP)
    {
        n_chars ++;
        if (c == '\n')
        {
            n_lines ++;
        }
        if (! isspace(c) && ! inword)
        {
            inword = 1;
            n_words ++;
        }
        if (isspace(c) && inword)
        {
            inword = 0;
            prev = c;
        }
        if (prev != '\n')
        {
            p_lines = 1;
        }
    }
    printf("charater = %ld, words = %d, lines = %d, partial lines = %d \n", n_chars, n_words, n_lines, p_lines);

    return 0;
}