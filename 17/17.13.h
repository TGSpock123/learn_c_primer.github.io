#ifndef _17_13_H
#define _17_13_H

#define MAX_SIZE 3

typedef struct item_for_node
{
  int j;
  int p;
}item;

typedef struct node_for_stack
{
  struct node_for_stack * prev;
  item item_in_node;
}node;

void init_stack (node ** stack);
void eatline (void);
_Bool push_to_stack (node ** stack);
_Bool pop_from_stack (node ** stack);
int tran_stack (node ** stack);
void clear_stack (node ** stack);

#endif
