#include <stdio.h>
#include <limits.h>

char * itobs (int n, char * ps);
void show_bstr (const char * str);
int invert_end (int num, int bits);

int main (void)
{
  char bin_str[CHAR_BIT * sizeof (int) + 1];
  int number;

  puts ("Enter integers to turn into binary. ");
  puts ("Non-numeric input terminates program. ");

  while (scanf ("%d", &number))
  {
    printf ("%d is ", number);
    show_bstr (itobs (number, bin_str));
    putchar ('\n');
    number = invert_end (number, 4);
    printf ("Inverting the last 4 bits gives... \n");
    show_bstr (itobs (number, bin_str));
    putchar ('\n');
  }

  printf ("Thank you for using. \n");

  return 0;
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

void show_bstr (const char * str)
{
  int i = 0;
  while (str[i])
  {
    putchar (str[i]);
    if (!((++ i) % 4) && str[i])
    {
      putchar (' ');
    }
  }
}

int invert_end (int num, int bits)
{
  int mask = 0;
  int bitval = 1;

  while (bits -- > 0)
  {
    mask |= bitval;
    bitval <<= 1;
    printf ("%d %d\n", mask, bitval);   //mask其实就是15;
  }

  return num ^ mask;
}
