#include "14.19.h"
int main (void)
{
  char line[LEN], copy[LEN], choice;
  void (* pfun)(char *);

  puts ("Enter a string (empty line to quit): ");

  while ((s_gets (line, LEN)) && (line[0]))
  {
    while ((choice = showmenu()) != 'n')
    {
      switch (choice)
      {
        case 'u':
          pfun = ToUpper;
          break;
        case 'l':
          pfun = ToLower;
          break;
        case 't':
          pfun = Transpose;
          break;
        case 'o':
          pfun = Dummy;
          break;
      }

      strcpy (copy, line);
      show (pfun, copy);
    }

    puts ("Enter a string(empty line to quit): ");
  }

  puts ("Thank you for using. ");

  return 0;
}