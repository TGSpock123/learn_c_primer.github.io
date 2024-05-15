#if __STDC_VERSION__ != 201112L
#error Not C11

#endif
#include <stdio.h>

#line 10 "egvev.c"

int main (void)
{
  printf ("This is line %d. \n", __LINE__);
  printf ("The file is %s. \n", __FILE__);
#line 80 "eev.c"
  printf ("This is line %d. \n", __LINE__);
  printf ("The file is %s. \n", __FILE__);

  return 0;
}
