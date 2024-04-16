//加强版;
#include "s_gets.h"
#define MAXTITL 30
#define MAXBK 100
//声明结构;
struct book
{
	char title[MAXTITL], author[MAXTITL];
	float value;
};

int main (void)
{
	//声明结构变量;
	struct book library[MAXBK], * lib;
	int j = 0;
	char ch;

	lib = library;
	printf ("Please enter the book title. \n");
	printf ("While less than 30 books, enter an empty line anytime to quit. \n");

	//逐个存入书籍信息并在循环中存入title, 如果用户按下回车则结束任务, 注意指针使用方法;
	for (; (j < MAXBK) && (s_gets_1 (lib -> title, MAXTITL)) && (lib -> title[0]); j ++, lib ++)
	{
		//存入author;
		printf ("Please enter the author. \n");
		if (!(s_gets_1 (library[j].author, MAXTITL)) || (!library[j].author[0]))
		{
			break;
		}

		//存入value;
		printf ("Now enter the value. \n");
		//如果读到'\n'则结束任务, 如果不是则将刚刚读到的字符放回输入流;
		if ((ch = getchar()) == '\n')
		{
			break;
		}
		ungetc (ch, stdin);
		//如果读到非数字则要求输入数字并清空缓冲区;
		while (!(scanf ("%f", &library[j].value)))
		{
			printf ("Please enter a number. \n");
			fflush (stdin);
		}
		getchar();

		printf ("Please enter next book title: \n");
	}

	//打印;
	if (j == 0)
	{
		printf ("No input. \n");
		return 1;
	}

	for (int p1 = 0; p1 < 80; p1 ++)
	{
		putchar ('-');
	}
	putchar ('\n');
	for (int p = 0; p < j; p ++)
	{
		printf ("| %-29s| %-29s| $%-14.2f|\n", library[p].title, library[p].author, library[p].value);
		for (int p1 = 0; p1 < 80; p1 ++)
		{
			putchar ('-');
		}
		putchar ('\n');
	}

	printf ("\nDone. \n");

	return 0;
}