#include "17.17.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static void eatline (void);
static char * s_gets (char * st, int n);

void init_stack (stack * stack_in_prog)
{
  *stack_in_prog = NULL;
}

void push_to_stack (stack * stack_in_prog)
{
  stack stack_node;
  int size = tran_stack (stack_in_prog);
  item str[MAX_SIZE];

  if (size == MAX_SIZE)
  {
    printf ("No room to push.\n");
    return ;
  }

  printf ("Please enter a string. \n");
  s_gets (str, MAX_SIZE);
  size = 0;

  while (str[size])
  {
    stack_node = (node *) malloc (sizeof (node));
    stack_node -> item_in_stack = str[size];
    stack_node -> prev = *stack_in_prog;
    *stack_in_prog = stack_node;
    size ++;
  }

  if (size == MAX_SIZE)
  {
    printf ("No room to push. \n");
  }
}

void pop_from_stack (stack * stack_in_prog)
{
  int size = tran_stack (stack_in_prog);
  stack stack_node = *stack_in_prog;

  if (!size)
  {
    printf ("Nothing to pop. \n");
    return;
  }

  printf ("Revers of string. \n");
  while (*stack_in_prog)
  {
    putchar (stack_node -> item_in_stack);
    *stack_in_prog = stack_node -> prev;
    free (stack_node);
    stack_node = *stack_in_prog;
  }

  putchar ('\n');
}

int tran_stack (stack * stack_in_prog)
{
  int count = 0;
  node * node_to_trav = *stack_in_prog;

  while (node_to_trav)
  {
    node_to_trav = node_to_trav -> prev;
    count ++;
  }

  return count;
}

void count_stack (stack * stack_in_prog)
{
  printf ("Your stack have %d items now. \n", tran_stack (stack_in_prog));
}

void clear_stack (stack * stack_in_prog)
{
  node * clear;

  while (*stack_in_prog)
  {
    clear = *stack_in_prog;
    *stack_in_prog = clear -> prev;
    free (clear);
  }
}

static void eatline (void)
{
  while (getchar () != '\n');
}

static char * s_gets (char * st, int n)
{
  char * ret_val, * find;

  ret_val = fgets (st, n, stdin);

  if (ret_val)
  {
    find = strchr (st, '\n');

    if (find)
    {
      *find = '\0';
    }else
    {
      eatline ();
    }
  }

  return ret_val;
}
