#include "12.4_5.h"
static int i = 0;
extern void swe (void)
{
    extern int coal;

    for ( ; i < coal; i ++)
    {
        printf ("hello c world\n");
    }
}