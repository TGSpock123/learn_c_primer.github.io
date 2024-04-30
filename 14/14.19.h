#include "../s_gets.h"
#define LEN 81

void eatline (void)
{
  while (getchar () != '\n')
  {
    continue;
  }
}

char showmenu (void)
{
  char ans;

  puts ("Enter menu choice: ");
  puts ("'u': uppercase         'l':lowercase");
  puts ("'t': transposed case   'o':orignal case");
  puts ("'n': next string");

  do
  {
    ans = getchar ();
    ans = tolower (ans);
    eatline();
    if (strchr ("ulton", ans))
    {
      break;
    }else
    {
      puts ("Please enter u / l / t/ o / n. ");
    }
  }while (1);

  return ans;
}

void show (void (* fp)(char *), char * str)
{
  (*fp)(str);
  puts (str);
}

void ToUpper (char * str)
{
  while (*str)
  {
    *str = toupper (*str);
    str ++;
  }
}

void ToLower (char * str)
{
  while (*str)
  {
    *str = tolower (*str);
    str ++;
  }
}

void Transpose (char * str)
{
  while (*str)
  {
    if (islower (*str))
    {
      *str = toupper(*str);
      str ++;
    }else if (isupper (*str))
    {
      *str = tolower(*str);
      str ++;
    }
  }
}

void Dummy (char * str)
{
}