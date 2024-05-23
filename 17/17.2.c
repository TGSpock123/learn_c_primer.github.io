#include "../s_gets.h"

#define TSIZE 45

struct film
{
  char title[TSIZE];
  int rating;
  struct film * next;
};

inline static void eatline (void)
{
  while (getchar () != '\n');
}

int main (void)
{
  struct film * head = NULL, * prev, * cur;
  char input[TSIZE];

  printf ("Enter first movie title. \n");
  while (s_gets (input, TSIZE) && input[0])
  {
    cur = (struct film *) malloc (sizeof (struct film));
    if (!head)
    {
      head = cur;
    }else
    {
      prev -> next = cur;
    }

    cur -> next = NULL;
    strcpy (cur -> title, input);

    printf ("Enter your rating (0 - 10): \n");
    while (1)
    {
      if (scanf ("%d", &cur -> rating))
      {
        if (cur -> rating <= 10 && cur -> rating >= 0)
        {
          eatline ();
          break;
        }
      }
      printf ("Please enter a correct rate. \n");
      eatline ();
    }

    printf ("Enter next movie title (empty line to stop): \n");
    prev = cur;
  }

  if (!head)
  {
    printf ("No data entered. \n");
    return 0;
  }

  printf ("Here is the movie list: \n");
  cur = head;
  while (cur != NULL)
  {
    printf ("Movie: %s, Rating: %d. \n", cur -> title, cur -> rating);
    cur = cur -> next;
  }

  //书上的代码导致死循环;
  cur = head;
  while (cur)
  {
    head = cur -> next;
    free (cur);
    cur = head;
  }
  printf ("Thank you for using. \n");

  return 0;
}
