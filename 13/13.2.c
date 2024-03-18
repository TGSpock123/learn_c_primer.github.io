#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main (int argc, char * argv[])
{
    FILE * in, * out;
    int ch;
    char name[LEN];
    int count = 0;

    if (argc < 2)
    {
        fprintf (stderr, "usage: %s filename\n", argv[0]);
        exit (EXIT_FAILURE);
    }
    else;

    if (!(in = fopen (argv[1], "r")))
    {
        fprintf (stderr, "i couldn't open the file \"%s\"\n", argv[1]);
        exit (EXIT_FAILURE);
    }
    else;

    strncpy (name, argv[1], LEN - 5);
    name[LEN - 5] = '\0';
    strcat (name, ".red");

    if (!(out = fopen (name, "w")))
    {
        fprintf (stderr, "can't create oupput file. \n");
        exit (3);
    }
    else;

    while ((ch = getc(in)) != EOF)
    {
        if (count ++ % 3 == 0)
        {
            putc (ch, out);
        }
        else;
    }

    if (fclose(in) || fclose(out))
    {
        fprintf(stderr, "error in closing files. \n");
    }
    else;

    return 0;
}