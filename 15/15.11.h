#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int str2int (char * ch)
{
  int ret = 0;

  for (int i = 0; i < strlen (ch); i ++)
  {
    ret *= 10;
    ret += (ch[i] - 48);
  }

  return ret;
}

_Bool if_open (int j, int p)
{
  int mask;

  mask = 1 << (p - 1);
  return ((j & mask) == mask) ? 1 : 0;
}
