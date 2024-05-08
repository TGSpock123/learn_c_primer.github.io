#include <stdio.h>
int main (void)
{
  int j, j1[2], p, jp[7][16];

  printf ("please enter j: \n");
  scanf ("%d", &j);
  printf ("please enter p: \n");
  scanf ("%d", &p);

  //这种写法被允许: j <<= 1;
  j1[0] = j << 1;
  j1[1] = j >> 1;
  printf ("j << 1: %d, j * (2 ^ 1) = %d\n", j1[0], j * 2);
  printf ("j >> 1: %d, j / (2 ^ -1) = %d\n", j1[1], j / 2);
  putchar ('\n');

  for (int i = 15; i > -1; i --)
  {
    if (j > 0)
    {
      jp[1][i] = j % 2;
      j /= 2;
    }else
    {
      jp[1][i] = 0;
    }

    if (p > 0)
    {
      jp[0][i] = p % 2;
      p /= 2;
    }else
    {
      jp[0][i] = 0;
    }

    if (j1[0] > 0)
    {
      jp[5][i] = j1[0] % 2;
      j1[0] /= 2;
    }else
    {
      jp[5][i] = 0;
    }

    if (j1[1] > 0)
    {
      jp[6][i] = j % 2;
      j1[1] /= 2;
    }else
    {
      jp[6][i] = 0;
    }

    jp[2][i] = jp[1][i] & jp[0][i];
    jp[3][i] = jp[1][i] | jp[0][i];
    jp[4][i] = jp[1][i] ^ jp[0][i];
  }

  printf ("     j: ");
  for (int i = 0; i < 16; i ++)
  {
    printf ("%d", jp[1][i]);
  }
  putchar ('\n');

  printf ("     p: ");
  for (int i = 0; i < 16; i ++)
  {
    printf ("%d", jp[0][i]);
  }
  putchar ('\n');

  printf (" j & p: ");
  for (int i = 0; i < 16; i ++)
  {
    printf ("%d", jp[2][i]);
  }
  putchar ('\n');

  printf (" j | p: ");
  for (int i = 0; i < 16; i ++)
  {
    printf ("%d", jp[3][i]);
  }
  putchar ('\n');

  printf (" j ^ p: ");
  for (int i = 0; i < 16; i ++)
  {
    printf ("%d", jp[4][i]);
  }
  putchar ('\n');

  printf ("j << 1: ");
  for (int i = 0; i < 16; i ++)
  {
    printf ("%d", jp[5][i]);
  }
  putchar ('\n');

  printf ("j >> 1: ");
  for (int i = 0; i < 16; i ++)
  {
    printf ("%d", jp[6][i]);
  }
  putchar ('\n');

  return 0;
}
