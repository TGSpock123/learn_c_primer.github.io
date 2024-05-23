#include "17.9.h"

int main (void)
{
  the_queue line;
  item temp;
  char ch;

  init_queue (&line);

  printf ("Testing queue interface, please choose a choice: \n");
  printf ("a) add a value. b) delete a value. q) quit programme. \n");

  while ((ch = getchar()) != 'q')
  {
    eatline ();
    if ((ch != 'a') && (ch != 'b'))
    {
      printf ("Please enter a correct choice. \n");
      continue;
    }

    (ch == 'a') ?
    ({
      printf ("Integer to add: \n");
      scanf ("%d", &temp);
      eatline ();

      (if_queue_full (&line)) ?
      ({
        printf ("No room to add. \n");
      }) :
      ({
        add_to_queue (temp, &line);
        printf ("%d has added to queue. \n", temp);
      });
    }) :
    ({
      (if_queue_empty (&line)) ?
      ({
        printf ("Nothing to delete. \n");
      }) :
      ({
        del_from_queue (&temp, &line);
        printf ("%d has removed from queue. \n", temp);
      });
    });

    printf ("%d items in queue. \n", count_queue_item (&line));
    printf ("Please choose next step. \n");
    printf ("a) add a value. b) delete a value. q) quit programme. \n");
  }

  queue_clear (&line);
  printf ("Thank you for using. \n");

  return 0;
}
