#include <stdio.h>
void prtc (char cha);
int main (void)
{	char ch;
	int count = 0;

	printf ("Please enter some letters: \n");
	while ((ch = getchar ()) != EOF)
	{
		if (ch == '\n')
		{
			count = 9;
		}
		if (count == 9)
		{
			prtc (ch);
			putchar ('\n');
			count = 0;
		}else
		{
			prtc (ch);
			count ++;
		}
	}

	return 0;
}
void prtc (char cha)
{
	if (cha <= 126 && cha >= 33)
	{
		printf ("%c", cha);
		printf (" %d ", (int)cha);
	}else if (cha == '\n')
	{
		printf ("\\n");
		printf (" %d ", (int)cha);
	}else if (cha == '\t')
	{
		printf ("\\t");
		printf (" %d ", (int)cha);
	}else if (cha == 126)
	{
		printf ("DEL");
		printf (" %d ", (int)cha);
	}else if (cha == 32)
	{
		printf ("(space)");
		printf (" %d ", (int)cha);
	}else
	{
		printf ("CTRL + %c", cha + 64);
		printf (" %d ", (int)cha);
	}
}
