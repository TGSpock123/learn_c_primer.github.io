#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

void my_printf (const char * formart, ...);

int main (void)
{
  int i = -45;
  int b = 54;
  char ch = '\\';
  char * str = "Hello, printf. ";

  my_printf ("testing: \n%c\n%d\n%b\n%s\n", ch, i, b, str);

  return 0;
}

void my_printf (const char * formart, ...)
{
  va_list ap;
  const char * p = formart;

  va_start (ap, formart);
  while (*p)
  {
    if (*p == '%')
    {
      p ++;

      switch (*p)
      {
        case ('d'):
        {
          char buffer[33];
          int k = 0, i = va_arg (ap, int);
          _Bool if_bigger = 1;

          if (i == 0)
          {
            putchar ('0');
            break;
          }

          if (i < 0)
          {
            if_bigger = 0;

            if (i == INT_MIN)
            {
              const char * min_int_str = "-2147483648";

              while (* min_int_str)
              {
                putchar(*min_int_str ++);
              }

              break;
            }

            i = -i;
          }

          for (; i; i /= 10, k ++)
          {
            buffer[k] = ((i % 10) + 48);
          }

          if (!if_bigger)
          {
            buffer[k] = '-';
            k ++;
          }

          for (int cot = k - 1; cot >= 0; cot --)
          {
            putchar (buffer[cot]);
          }

          break;
        }
        case ('c'):
        {
          int ch = va_arg (ap, int);

          putchar (ch);
          break;

        }
        case ('b'):
        {
          _Bool buffer[65];
          int k = 0;

          for (int b = va_arg (ap, int); b; b /= 2, k ++)
          {
            buffer[k] = b % 2;
          }

          for (int b = k - 1; b >= 0; b --)
          {
            putchar (buffer[b] + 48);
          }

          break;
        }
        case ('s'):
        {
          for (char * str = va_arg (ap, char *); *str; putchar (*str), str ++);
          break;
        }
      }
    }else
    {
      putchar (*p);
    }

    p ++;
  }

  va_end (ap);
}
