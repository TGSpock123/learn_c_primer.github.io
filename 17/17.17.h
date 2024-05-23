#ifndef _17_17_H
#define _17_17_H

#define MAX_SIZE 30

typedef char item;

typedef struct node_f_stack
{
  item item_in_stack;
  struct node_f_stack * prev;
}node;

typedef node * stack;

void init_stack (stack * stack_in_prog);
void push_to_stack (stack * stack_in_prog);
void pop_from_stack (stack * stack_in_prog);
int tran_stack (stack * stack_in_prog);
void count_stack (stack * stack_in_prog);
void clear_stack (stack * stack_in_prog);

#endif
