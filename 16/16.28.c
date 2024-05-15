#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bingo (int * members, size_t siz, int times);
inline static void eatline (void);

int main (void)
{
  int members[] = {
      0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
      10, 11, 12, 13, 14, 15, 16, 17, 18, 19
  }, times;
  size_t siz;
  srand (time (0));

  printf ("Please enter times you want to choose: \n");
  while (1)
  {
    scanf ("%d", &times);
    eatline ();
    if (times > 0)
    {
      break;
    }
    printf ("Please enter correct times. \n");
  }

  siz = sizeof (members) / sizeof (int);

  if (times > siz)
  {
    printf ("Too mutch times, setted to biggist time %d. \n", (int) siz);
    times = (int) siz;
  }

  bingo (members, (sizeof (members) / sizeof (int)), times);
  printf ("Thank you for using. \n");

  return 0;
}

void bingo (int * members, size_t siz, int times)
{
  int chosen[times], temp;
  _Bool if_equal;
  char * th[] = {
      "st", "nd", "rd", "th"
  };

  for (int cot = 0; cot < times; cot ++)
  {
    if_equal = 0;
    temp = (int)(rand () % siz);

    for (int nums = 0; nums < cot; nums ++)
    {
      if (temp == chosen[nums])
      {
        if_equal = 1;
        break;
      }
    }

    if (if_equal)
    {
      if_equal = 0;
      cot --;
      continue;
    }

    chosen[cot] = temp;
  }

  for (int cot = 0; cot < times; cot ++)
  {
    printf ("The %d%s choice is %d. \n", cot + 1, (cot < 3) ? (th[cot]) : (th[3]), members[chosen[cot]]);
  }
}

inline static void eatline (void)
{
  while (getchar () != '\n');
}
