#include <stdio.h>
#include <string.h>
#define LISTSIZE 6
int main (void)
{
    const char * list[LISTSIZE] =
            {
            "astronomy",
            "astounding",
            "astrophysics",
            "ostracize",
            "asterism",
            "astrophobia"
            };
    int count = 0;
    int i;

    for (i = 0; i < LISTSIZE; i++)
    {
        if (strncmp (list[i], "astr", 4) == 0)
        {
            printf ("Found: %s.\n", list[i]);
            count ++;
        }
    }
    printf ("The list contained %d words beginning with astr. \n", count);

    return 0;
}