#include "17.5.h"

int main (void)
{
  list movies;
  item1 temp;

  init_list (&movies);
  if (if_list_full ())
  {
    fprintf (stderr, "Memory full. \n");
    exit (1);
  }

  printf ("Please enter first movie title: \n");
  while ((s_gets (temp.title, TSIZE)) && (temp.title[0]))
  {
    printf ("Please enter your rating (0 - 10): \n");
    temp.rating = input_rate ();

    if (!(add_item (temp, &movies)))
    {
      fprintf (stderr, "Allocatted failed. \n");
      break;
    }

    if (if_list_full ())
    {
      printf ("The list is full. \n");
      break;
    }

    printf ("Please enter next movie title(empty line to stop): \n");
  }

  if (if_list_empty (&movies))
  {
    printf ("No data entered.\n");
    exit (0);
  }

  printf ("Here is the movie list: \n");
  traverse (&movies, show_list);
  rev_list (&movies);
  printf ("You've entered %d movies. \n", list_count (&movies));

  printf ("Thank you for using. \n");
  clear_list (&movies);
  return 0;
}
