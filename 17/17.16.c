#include "17.17.h"
#include <stdio.h>

int main (void)
{
  stack stack_tail;

  init_stack (&stack_tail);
  push_to_stack (&stack_tail);
  count_stack (&stack_tail);
  pop_from_stack (&stack_tail);

  printf ("Thank you for using. \n");
  clear_stack (&stack_tail);
  return 0;
}
