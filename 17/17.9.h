#ifndef _17_9_H
#define _17_9_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define MAXQUEUE 10

//typedef int item;   //This is for 17.8.c;
typedef struct struct_item
{
  long arrive;
  int process_time;
}item;

typedef struct node
{
  item item_in_node;
  struct node * next;
}one_node;

typedef struct queue
{
  one_node * head;
  one_node * tail;
  int item_count;
}the_queue;

void eatline (void);
void init_queue (the_queue * pt_queue);
bool if_queue_full (const the_queue * pt_queue);
bool if_queue_empty (const the_queue * pt_queue);
int count_queue_item (const the_queue * pt_queue);
bool add_to_queue (item item_to_add, the_queue * pt_queue);
bool del_from_queue (item * item_to_del, the_queue * pt_queue);
void queue_clear (the_queue * pt_queue);

#endif
