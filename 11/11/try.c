#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a line: ");
    fgets(str, 100, stdin);

    i = 0;
    while(str[i] && isspace(str[i])) {
        i++;
    }

    if(str[i] == '\0') {
        printf("The word is: none\n");
        return 0;
    }
/*
    while(str[i] && !isspace(str[i])) {
        i++;
    }
*/
    printf("The word is: ");
    for(int j = i; str[j] && !isspace(str[j]); j++) {
        putchar(str[j]);
    }
    printf("\n");

    return 0;
}