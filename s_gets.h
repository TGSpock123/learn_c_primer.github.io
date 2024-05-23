#ifndef _S_GETS_H
#define _S_GETS_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

char * s_gets (char *st, int n);
char * s_gets_1 (char * st, int n);
inline static void eatline (void)
{
  while (getchar () != '\n');
}

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
      eatline ();
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
      eatline ();
    }
  }

  return ret_val;
}

#endif
