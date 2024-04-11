#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  FILE* fp;
  int k;

  fp = fopen("test1310", "w+");

  for (k = 0; k < 30; k++)
  {
    fputs("Nanette eats geldtin. \n", fp);
  }

  fclose(fp);

  return 0;
}