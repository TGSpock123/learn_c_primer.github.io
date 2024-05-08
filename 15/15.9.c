#include "15.9_10.h"

int main (void)
{
  char ch[33];
  bool eigen = 1;

  printf ("Please enter number in binary, this programme will converse it to decimal. \n");
  s_gets (ch, 32);
  for (int i = 0; i < strlen (ch); i ++)
  {
    if ((ch[i] != '0') && (ch[i] != '1'))
    {
      eigen = 0;
      break;
    }
  }

  (eigen == 1) ? printf ("The number is %d. \n", b2dcov (ch)) : printf ("Wrong input");

  return 0;
}
