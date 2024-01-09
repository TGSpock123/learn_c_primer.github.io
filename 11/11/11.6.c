//
//  11.6.c
//  11
//
//  Created by T G Spock on 2024/1/3.
//

#include <stdio.h>
int main (void)
{
    const char * mesg = "Don't be a fool";
    const char * copy;
    
    printf ("&copy = %p\n", &copy);
    copy = mesg;
    printf ("%s \n", copy);
    printf ("mesg = %s, &mesg = %p, value of mesg = %p\n", mesg, &mesg, mesg);
    printf ("cpoy = %s, &copy = %p, value of copy = %p\n", mesg, &mesg, mesg);
}
