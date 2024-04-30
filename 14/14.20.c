#include "14.19.h"
typedef void (* TURN[4])(char *);
enum {u = 0, l, t, o};

int main (void)
{
  TURN turn = {
      ToUpper, ToLower, Transpose, Dummy
  };
  char line[LEN], copy[LEN], choice;

  puts ("Enter a string (empty line to quit): ");

  while ((s_gets (line, LEN)) && (line[0]))
  {
    while ((choice = showmenu ()) != 'n')
    {
      strcpy (copy, line);
      switch (choice)
      {
        case 'u':
          show (turn[u], copy);
          break;
        case 'l':
          show (turn[l], copy);
          break;
        case 't':
          show (turn[t], copy);
          break;
        case 'o':
          show (turn[o], copy);
          break;
      }
    }
    puts ("Enter a string(empty line to quit): ");
  }

  puts ("Thank you for using. ");

  return 0;
}