//
//  11.1.c
//  11
//
//  Created by T G Spock on 2023/12/25.
//

#include <stdio.h>
#define MSG "I am a symbolic string constant. "
#define MAXLENGTH 81
int main (void)
{
    char words[MAXLENGTH] = "I am a string array. ";
    const char * pt1 = "Something is pointing at me. ";
    
    puts ("here are some strings. ");
    puts (MSG);
    puts (words);
    puts (pt1);
    words[8] = 'p';
    puts (words);
    
    return 0;
}
