#include "17.13.h"
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  node * stack_tail = (node *) malloc (sizeof (node));
  char ch;

  init_stack (&stack_tail);

  printf ("Push, pop or read how many: \n");
  while (1)
  {
    printf ("a) push. b) pop. c) read. q) quit. \n");
    ch = getchar ();
    eatline ();
    if (ch == 'q')
    {
      break;
    }

    switch (ch)
    {
      case 'a':
        push_to_stack (&stack_tail);
        break;
      case 'b':
        pop_from_stack (&stack_tail);
        break;
      case 'c':
        count_stack (&stack_tail);
        break;
      default:
        printf ("Please enter a correct choice. \n");
        break;
    }
    printf ("Please enter next choice: \n");
  }

  printf ("Thank you for using. \n");
  clear_stack (&stack_tail);
  return 0;
}