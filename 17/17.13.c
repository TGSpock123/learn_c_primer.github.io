#include "17.13.h"
#include "../s_gets1.h"

void init_stack (node ** stack)
{
  *stack = NULL;
}

void eatline (void)
{
  while (getchar () != '\n');
}

_Bool push_to_stack (node ** stack)
{
  int size = tran_stack (stack);
  node * node_to_push = (node *) malloc (sizeof (node));


  if (size == MAX_SIZE)
  {
    printf ("No room to push. \n");
    return 0;
  }

  printf ("Please enter j: \n");
  scanf ("%d", &node_to_push -> item_in_node.j);
  eatline ();
  printf ("Please enter p: \n");
  scanf ("%d", &node_to_push -> item_in_node.p);
  eatline ();

  node_to_push -> prev = *stack;
  *stack = node_to_push;

  return 1;
}

_Bool pop_from_stack (node ** stack)
{
  int size = tran_stack (stack);
  node * node_to_pop = *stack;

  if (size == 0)
  {
    printf ("Nothing to pop. \n");
    return 0;
  }

  printf ("j: %d, p: %d. \n", node_to_pop -> item_in_node.j, node_to_pop -> item_in_node.p);
  *stack = node_to_pop -> prev;

  free (node_to_pop);
  return 1;
}

void count_stack (node ** stack)
{
  printf ("Your stack have %d items now. \n", tran_stack (stack));
}

int tran_stack (node ** stack)
{
  int count = 0;
  node * node_to_trav = *stack;

  while (node_to_trav -> prev)
  {
    node_to_trav = node_to_trav -> prev;
    count ++;
  }

  return count;
}

void clear_stack (node ** stack)
{
  node * clear;

  while (*stack)
  {
    clear = *stack;
    *stack = clear -> prev;
    free (clear);
  }
}
