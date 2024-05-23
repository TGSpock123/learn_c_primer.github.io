#include "17.5.h"

void rev_list (list * pt_list)
{
  node1 * for_rev = *pt_list;

  if (for_rev -> next)
  {
    rev_list (&(for_rev -> next));
  }

  show_list (for_rev -> item);
}
/*
 * typedef struct list
 * {
 *  item enteries[MAXSIZE];
 *  int items;
 * }
*/