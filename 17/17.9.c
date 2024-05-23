#include "17.9.h"

static void copy_to_node (item one_item, one_node * pt_node)
{
  pt_node -> item_in_node = one_item;
}

static void copy_to_item (one_node * pt_node, item * pt_item)
{
  *pt_item = pt_node -> item_in_node;
}

void eatline (void)
{
  while (getchar() != '\n');
}

void init_queue (the_queue * pt_queue)
{
  pt_queue -> head = pt_queue -> tail = NULL;
  pt_queue -> item_count = 0;
}

bool if_queue_full (const the_queue * pt_queue)
{
  return (pt_queue -> item_count == MAXQUEUE);
}

bool if_queue_empty (const the_queue * pt_queue)
{
  return (pt_queue -> item_count == 0);
}

int count_queue_item (const the_queue * pt_queue)
{
  return (pt_queue -> item_count);
}

bool add_to_queue (item item_to_add, the_queue * pt_queue)
{
  one_node * new_pt;

  if (if_queue_full (pt_queue))
  {
    return false;
  }

  new_pt = (one_node *) malloc (sizeof (one_node));
  if (!new_pt)
  {
    fprintf (stderr, "Allocated failed. \n");
    exit (EXIT_FAILURE);
  }

  copy_to_node (item_to_add, new_pt);

  new_pt -> next = NULL;
  (if_queue_empty (pt_queue)) ?
  ((pt_queue -> head) = new_pt) :
  ((pt_queue -> tail -> next) = new_pt);

  pt_queue -> tail = new_pt;
  pt_queue -> item_count ++;

  return true;
}

bool del_from_queue (item * item_to_del, the_queue * pt_queue)
{
  one_node * new_pt;

  if (if_queue_empty (pt_queue))
  {
    return false;
  }

  copy_to_item (pt_queue -> head, item_to_del);
  new_pt = pt_queue -> head;
  pt_queue -> head = pt_queue -> head -> next;
  free (new_pt);

  pt_queue -> item_count --;

  if (!(pt_queue -> item_count))
  {
    pt_queue -> tail = NULL;
  }

  return true;
}

void queue_clear (the_queue * pt_queue)
{
  item dummy;

  while (!(if_queue_empty (pt_queue)))
  {
    del_from_queue (&dummy, pt_queue);
  }
}
