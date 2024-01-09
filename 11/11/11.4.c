//
//  11.4.c
//  11
//
//  Created by T G Spock on 2024/1/2.
//

#include <stdio.h>
int main (void)
{
    char heart[] = "I love A";
    const char * head = "I love B";
    const char * spare;
    
    printf ("address heart = %p\n", heart);
    printf ("address head = %p\n", head);
    printf ("address spare = %p\n", spare);
    for (int i = 0; i < 8; i ++)
    {
        putchar (heart[i]);
    }
    putchar ('\n');
    for (int i = 0; i < 8; i ++)
    {
        putchar (head[i]);
    }
    putchar ('\n');
    for (int i = 0; i < 8; i ++)
    {
        putchar (*(heart + i));
    }
    putchar ('\n');
    for (int i = 0; i < 8; i ++)
    {
        putchar (*(head + i));
    }
    putchar ('\n');
    while (*(head) != '\0')
    {
        putchar (*(head++));
    }
    putchar ('\n');
    printf ("address head b4 = %p \n", head);
    head = heart;
    printf ("address head aft = %p \n", head);
    for (int i = 0; i < 8; i ++)
    {
        putchar (head[i]);
    }
    putchar ('\n');
    printf ("now spare working. \n");
    spare = 0x100003f27;
    for (int i = 0; i < 8; i ++)
    {
        putchar (spare[i]);
    }
    putchar ('\n');
    
    return 0;
}
