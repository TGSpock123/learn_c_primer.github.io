//
//  11.18.c
//  11
//
//  Created by T G Spock on 2024/1/9.
//

#define SIZE 80
#include "s_gets.h"
int main (void)
{
	char flower[SIZE];
	char addon[] = "s smell like old shoes. ";

	puts ("What is your favorate flower?");
	if (s_gets(flower, SIZE))
	{
		strcat (flower, addon);
		puts (flower);
		puts (addon);
	}else
	{
		puts ("End of file encourtered!");
	}
	puts ("bye");

	return 0;
}
