//部分重构;
#ifndef _17_5_H
#define _17_5_H
#include "../s_gets1.h"

#define TSIZE 45
#define RATE_MIN 0
#define RATE_MAX 10

typedef struct item
{
  char title[TSIZE];
  int rating;
}item1;

typedef struct node
{
  item1 item;
  struct node * next;
}node1;

typedef node1 * list;

void init_list (list * pt_list);
bool if_list_empty (const list * pt_list);
bool if_list_full (void);
unsigned int list_count (const list * pt_list);
bool add_item (item1 item, list * pt_list);
void traverse (const list * pt_list, void (*pfun)(item1 item));
void rev_list (list * pt_list);
void clear_list (list * pt_list);
void show_list (item1 item);
int input_rate (void);

#endif
