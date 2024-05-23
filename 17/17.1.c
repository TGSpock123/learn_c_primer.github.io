#include "../s_gets.h"

#define TSIZE 45
#define FMAX 5

struct film
{
  char title[TSIZE];
  int rating;
};

inline static void eatline (void)
{
  while (getchar () != '\n');
}

int main (void)
{
  struct film movies[FMAX];
  int j = 0;
  int p;

  puts ("Enter first movie title: ");
  while (j < FMAX && s_gets (movies[j].title, TSIZE) && movies[j].title[0])
  {
    puts ("Enter your rating (0 - 10): ");
    while (1)
    {
      if (scanf ("%d", &movies[j].rating))
      {
        eatline ();
        if (movies[j].rating <= 10 && movies[j].rating >= 0)
        {
          break;
        }
      }
      printf ("Please enter a correct rate. \n");
    }
    j ++;
    puts ("Enter next movie title (empty line to stop): ");
  }

  if (!j)
  {
    printf ("No data entered. \n");
    return 0;
  }

  printf ("Here is the movie list: \n");
  for (p = 0; p < j; p ++)
  {
    printf ("Movie: %s Rating: %d\n", movies[p].title, movies[p].rating);
  }

  printf ("Thank you for using. \n");

  return 0;
}
