#include <stdio.h>
#include <limits.h>

char * itobs (int n, char * ps);
void show_bstr (const char * str);

int main (void)
{
  char bin_str[CHAR_BIT * sizeof (int) + 1];
  int number;

  puts ("Enter integers to turn into binary. ");
  puts ("Non-numeric input terminates program. ");

  while (scanf ("%d", &number))
  {
    itobs (number, bin_str);
    printf ("%d is ", number);
    show_bstr (bin_str);
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
