#include "../s_gets1.h"
#include <limits.h>

int b2dcov (const char * pbin)
{
  int ret = 0;
  int count = 0;

  for (const char * temp = pbin; *temp != 0; temp ++, count ++)
  {
    (*temp == '0') ? (ret += 0): (ret += (1 << (strlen (pbin) - count - 1)));
  }

  return ret;
}

char * itobs (int n, char * ps)
{
  int i;
  const static int size = CHAR_BIT * sizeof (int);

  for (i = size - 1; i >= 0; i --, n >>= 1)
  {
    ps[i] = (01 & n) + 48;
  }

  ps[size] = '\0';

  return ps;
}

int bits_open (int n)
{
  const static int size = CHAR_BIT * sizeof (int);
  int ret = 0;

  for (int i = size - 1; i > 0; i --, n >>= 1)
  {
    ((1 & n) == 1) ? (ret += 1) : (ret += 0);
  }

  return ret;
}
