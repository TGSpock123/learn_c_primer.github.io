//
//  11.8.c
//  11
//
//  Created by T G Spock on 2024/1/5.
//

#include <stdio.h>
#define STLEN 14
int main (void)
{
	char words[STLEN]; 

	puts ("Enter a string,please.");
	fgets (words, STLEN, stdin);
	printf ("Your string twice (puts(), then fputs()): \n");
	puts (words);
	fputs (words, stdout);
	puts ("Enter another string, please.");
	fgets (words, STLEN, stdin);
	puts (words);
	fputs (words, stdout);
	puts ("Done");

	return 0;
}
