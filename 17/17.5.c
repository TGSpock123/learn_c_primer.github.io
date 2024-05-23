#include "17.5.h"

inline static void copy_2_node (item1 one_item, node1 * pt_node);

int input_rate (void)
{
  int temp;

  while (1)
  {
    if (scanf ("%d", &temp))
    {
      if (temp <= RATE_MAX && temp >= RATE_MIN)
      {
        eatline ();
        break;
      }
    }
    printf ("Please enter a correct rate. \n");
    eatline ();
  }

  return temp;
}

inline void show_list (item1 one_item)
{
  printf ("Movie: %s, Rating: %d. \n", one_item.title, one_item.rating);
}

void init_list (list * pt_list)
{
  *pt_list = NULL;
}

bool if_list_empty (const list * pt_list)
{
  return (*pt_list) ? false : true;
}

bool if_list_full (void)
{
  node1 * pt;
  bool if_full;

  pt = (node1 *) malloc (sizeof (node1));
  (pt) ? (if_full = false) : (if_full = true);

  free (pt);
  return if_full;
}

unsigned int list_count (const list * pt_list)
{
  unsigned int count = 0;
  node1 * pt_node = * pt_list;

  while (pt_node)
  {
    ++ count;
    pt_node = pt_node -> next;
  }

  return count;
}

bool add_item (item1 one_item, list * pt_list)
{
  node1 * pt_new;
  node1 * scan = *pt_list;

  pt_new = (node1 *) malloc (sizeof (node1));
  if (!(pt_new))
  {
    return false;
  }

  copy_2_node (one_item, pt_new);

  pt_new -> next = NULL;
  (scan) ?
  ({
    while (scan -> next)
    {
      scan = scan -> next;
    }
    scan -> next = pt_new;
  }) : (*pt_list = pt_new);

  return true;
}

void traverse (const list * pt_list, void (*pfun)(item1 one_item))
{
  node1 * pt_node = *pt_list;

  while (pt_node)
  {
    (*pfun)(pt_node -> item);
    pt_node = pt_node -> next;
  }
}

void clear_list (list * pt_list)
{
  node1 * pt_save;

  while (*pt_list)
  {
    pt_save = (*pt_list) -> next;
    free (*pt_list);
    *pt_list = pt_save;
  }
}

inline static void copy_2_node (item1 one_item, node1 * pt_node)
{
  pt_node -> item = one_item;
}
