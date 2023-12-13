//转换英尺英寸
#include <stdio.h>
int main(void)
{
    int feet,fathoms;

    printf ( "please enter fathoms:\n" );
    scanf ( "%d" , &fathoms );
    feet = fathoms * 6;
    printf( "There are %d feet in %d fathoms\n " , feet , fathoms );
    printf ( "Yes I said there are %d feet\n " , 6 * fathoms );

    return 0;
}