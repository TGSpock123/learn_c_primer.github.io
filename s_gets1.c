#include "s_gets1.h"

char * s_gets (char * st, int n)
{
  char * ret_val;

  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    while ((*st != '\n') && (*st))
    {
      *st ++;
    }

    if (*st == '\n')
    {
      *st = '\0';
    }else
    {
      while ((getchar() == '\n') == 0);
    }
  }else
  {
    ret_val = "No result. \n";
  }

  return ret_val;
}

char * s_gets_1 (char * st, int n)
{
  char * ret_val, * find;

  ret_val = fgets (st, n, stdin);

  if (ret_val)
  {
    find = strchr (st, '\n');

    if (find)
    {
      *find = '\0';
    }else
    {
      while (getchar() != '\n');
    }
  }

  return ret_val;
}
