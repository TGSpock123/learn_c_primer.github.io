#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char str[100];
	char * ch;

	fgets(str, sizeof(str), stdin);
	*ch = getchar();
	ungetc(*ch, stdin);
	printf("%s", str);

	return 0;
}
//不管用, 还得学. 
