//
//  11.3.c
//  11
//
//  Created by T G Spock on 2024/1/2.
//

#define MSG "I'm special"
#include <stdio.h>
int main (void)
{
    char ar[] = MSG;
    const char * pt = MSG;
    
    printf ("address of \"I'm special\": %p \n", "I'm special");
    printf ("              address ar: %p \n", ar);
    printf ("              address pt: %p \n", pt);
    printf ("          address of MSG: %p \n", MSG);
    printf ("address of \"I'm special\": %p \n", "I'm special");
    
    return 0;
}
