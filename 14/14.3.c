#include <stdio.h>
#define LEN 20
#define PIECES 3

const char * msgs[5] = {
    "    Thank you for wonderful evening, ",
    "You certainly prove that a ",
    "is a special kind of guy. We must get together",
    "over a delicious ",
    " and have a few laughs"
};

struct name
{
  char first[LEN];
  char last[LEN];
};

struct guy
{
  struct name handle;
  char favfood[LEN];
  char job[LEN];
  double income;
};

int main (void)
{
  struct guy fellow[PIECES] = {
      {{"Ewen", "Villard"},
       "grilled salmon",
       "personality coach",
       68112.00
       },
      {{"Rodney", "Swillbelly"},
       "tripe",
       "tabloid editor",
       432400.00
      },
      {{"Thomas", "Spock"},
       "watermellon",
       "coder",
       70566.00
      }
  }, * him = &fellow[0];
  //上面是一个结构指针;

  for (int j = 0; j < PIECES; j ++)
  {
    printf ("Dear %s %s, \n\n", fellow[j].handle.first, fellow[j].handle.last);
    printf ("%s%s. \n", msgs[0], fellow[j].handle.first);
    printf ("%s%s\n", msgs[1], fellow[j].job);
    printf ("%s\n", msgs[2]);
    printf ("%s%s%s", msgs[3], fellow[j].favfood, msgs[4]);
    if (fellow[j].income > 150000.0)
    {
      puts ("!!");
    }else if (fellow[j].income > 75000.0)
    {
      puts ("!");
    }else
    {
      puts (".");
    }
    printf ("\n%40s%s\n", " ", "See you soon, ");
    printf ("%40s%s\n", " ", "Shalala");
  }

  for (int p = 0; p < PIECES; p ++, him ++)
  {
    putchar ('\n');
    printf ("#%d: adress: %p; pointer %p\n", p + 1, &fellow[p], &him);
    printf ("him -> income is $%.2f; (*him).income is $%.2f. \n", him -> income, (*him).income);
    printf ("him -> favfood is %s; him -> handle.last is %s. \n", him -> favfood, him -> handle.last);
  }

  printf ("\nDone. \n");

  return 0;
}