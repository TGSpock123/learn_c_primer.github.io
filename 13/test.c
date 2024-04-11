#include <stdio.h>
int main (void)
{
  int heart[90][150];

  //填充为空格;
  for (int j = 0; j < 70; j ++)
  {
    for (int p = 0; p < 113; p ++)
    {
      heart[j][p] = 32;
    }
  }

  //填充 5 - 15 行;
  for (int j1 = 0, j = 0, j2 = 0, count = 0; j <= 10; j ++, j1 ++, j2 ++, count ++)
  {

    if ((count != 3) && (count != 5))
    {
      j1 ++;
    }
    if ((count != 2) && (count != 4))
    {
      j2 ++;
    }

    for (int p = 0; p < 8; p ++)
    {
      heart[j + 5][p] = 52;
    }

    for (int p = 24, p1 = 86; p < 40; p ++, p1 --)
    {
      heart[j + 5][p] = 53;
      heart[j + 5][p1] = 53;
    }

    for (int p = 0; p <= j2; p ++)
    {
      heart[j + 5][p + 40] = 53;
      heart[j + 5][p + 87] = 53;
    }

    for (int p = 16; p >= j1; p --)
    {
      heart[14 - j][p + 8] = 53;
      heart[14 - j][p + 56] = 53;
    }

    for (int p = 104; p < 112; p ++)
    {
      heart[j + 5][p] = 51;
    }

    if (count == 5)
    {
      count = 0;
    }

    heart[j + 5][112] = '\n';
  }

  //填充 15 - 25行;
  for (int j = 15; j < 25; j ++)
  {

    for (int p = 0; p < 8; p ++)
    {
      heart[j][p] = 52;
    }

    for (int p = 8; p < 105; p ++)
    {
      heart[j][p] = 50;
    }

    for (int p = 104; p < 112; p ++)
    {
      heart[j][p] = 51;
    }

    heart[j][112] = '\n';
  }

  //填充 25 - 65 行;
  for (int p1 = 0, p = 0, count = 0, cot = 0; p1 <= 40; p1 ++, p ++, count ++)
  {
    if ((count == 1) && (cot != 36))
    {
      p ++;
    }

    for (int j = 0; j < 8; j ++)
    {
      heart[p1 + 24][j] = 52;
    }

    for (int j = p; j < 48; j ++)
    {
      heart[p1 + 24][j + 8] = 48;
    }

    for (int j = 48; j < 96 - p; j ++)
    {
      heart[p1 + 24][j + 8] = 48;
    }

    heart[p1 + 24][112] = '\n';

    if (count == 5)
    {
      count = 0;
    }

    cot ++;

    for (int j = 104; j < 112; j ++)
    {
      heart[p1 + 24][j] = 51;
    }
  }

  //填充上边框;
  for (int j = 0; j < 5; j ++)
  {
    for (int p = 0; p < 105; p ++)
    {
      heart[j][p] = 49;
    }

    for (int p = 104; p < 112; p ++)
    {
      heart[j][p] = 51;
    }

    heart[j][112] = '\n';
  }

  //填充下边框;
  for (int j = 65; j < 70; j ++)
  {
    for (int p = 0; p < 8; p ++)
    {
      heart[j][p] = 52;
    }

    for (int p = 8; p < 112; p ++)
    {
      heart[j][p] = 49;
    }

    heart[j][112] = '\n';
  }

  //逐行打印;
  for (int j = 0; j < 70; j ++)
  {
    for (int p = 0; p < 113; p ++)
    {
      putchar(heart[j][p]);
    }
  }

  return 0;
}

