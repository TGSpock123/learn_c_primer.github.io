#include "12.19_20.h"
int main (void)
{
    double mode;

    do
    {
        printf ("enter 0 for metric mode, 1 for us mode, -1 to quit: \n");
        enter_number (&mode);
        if (mode < 0)
        {
            break;
        }else;
        set_mode ((int) mode);
        get_info ();
        show_info ();
    }while (1);
    printf ("done. \n");

    return 0;
}