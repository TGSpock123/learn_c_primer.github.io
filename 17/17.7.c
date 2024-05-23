#include "17.6_7.h"

inline static void no_this_guy (char * name)
{
  printf ("There's no one matched %s in this list. \n", name);
}

void init_pt (list * pt_list)
{
  *pt_list = NULL;
}

_Bool if_list_full (void)
{
  list test = (list) malloc (sizeof (struct node));
  _Bool if_full;

  (test) ? (if_full = 0) : (if_full = 1);

  free (test);
  return if_full;
}

char show_menu (void)
{
  char option;
  _Bool if_effi;

  printf ("Please choose your next operate: \n");
  printf ("a) add a person. \n"
          "b) delete a person. \n"
          "c) change a person. \n"
          "d) search a person. \n"
          "q) quit.\n");
  for (;;)
  {
    option = getchar ();
    eatline();
    switch (option)
    {
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'q':
        if_effi = 1;
        break;
      default:
        if_effi = 0;
        break;
    }

    if (if_effi)
    {
      break;
    }

    printf ("Please choose an efficient option. \n");
  }

  return option;
}

void add_node (list * pt_list)
{
  list new_pt = malloc (sizeof (one_node)), scan = *pt_list;
  int all_count = count_node (pt_list), count;

  if (!new_pt)
  {
    printf ("Error allocatted. \n");
    exit (0);
  }

  printf ("Add at where (from 1 to %d): \n", all_count + 1);
  for (;;)
  {
    scanf ("%d", &count);
    eatline ();
    if (count >= 1 && count <= all_count + 1)
    {
      break;
    }
    printf ("Please enter a correct count number. \n");
  }

  printf ("Please enter stuff's first name: \n");
  s_gets (new_pt -> name.first_name, NAME_MAX);
  if (!(new_pt -> name.first_name[0]))
  {
    printf ("Stop entering. \n");
    return;
  }
  printf ("Please enter %s's last name: \n", new_pt -> name.first_name);
  s_gets (new_pt -> name.last_name, NAME_MAX);
  new_pt -> next = NULL;

  (scan) ?
  ((count == 1) ?
  ({
    new_pt -> next = *pt_list;
    *pt_list = new_pt;
  }) :
  ({
    select_node_num (count, &scan);
    new_pt -> next = scan -> next;
    scan -> next = new_pt;
  })):
  (*pt_list = new_pt);
}

void delete_node (list * pt_list)
{
  list scan = *pt_list, for_delete = scan;
  char ch, str[NAME_MAX];
  int all_count = count_node (pt_list), count;

  if (!*pt_list)
  {
    printf ("No name to delete. \n");
    return;
  }

  printf ("Please enter stuff's number (from 1 to %d), first name or last name to delete: \n",
          all_count);
  if (isdigit (ch = getchar()))
  {
    ungetc (ch, stdin);
    scanf ("%d", &count);
    eatline ();

    if (count < 1 || count > all_count)
    {
      printf ("Out of range. \n");
      return;
    }

    (count == 1) ?
    ({
      *pt_list = scan -> next;
      free (for_delete);
    }) :
    ({
      select_node_num (count, &scan);
      for_delete = scan -> next;
      scan -> next = for_delete -> next;
      free (for_delete);
    });
  }else
  {
    ungetc (ch, stdin);
    s_gets (str, NAME_MAX);

    (!((strcmp (str, scan -> name.first_name)) && (strcmp (str, scan -> name.last_name)))) ?
    ({
      *pt_list = scan -> next;
      free (for_delete);
    }) :
    ({
      select_node_str (str, &scan);

      if (!scan)
      {
        no_this_guy (str);
        return ;
      }

      for_delete = scan -> next;
      scan -> next = for_delete -> next;
      free (for_delete);
    });
  }
}

void change_node (list * pt_list)
{
  int all_count = count_node (pt_list), count;
  list pt_to_change = *pt_list;
  full_name temp;

  if (!*pt_list)
  {
    printf ("No name to change. \n");
    return;
  }

  printf ("Please enter stuff's number to change (from 1 to %d): \n", all_count);
  scanf ("%d", &count);
  eatline ();

  if (count < 1 || count > all_count)
  {
    printf ("Out of range. \n");
    return;
  }

  select_node_num ((count + 1), &pt_to_change);

  printf ("Please enter stuff's first name: \n");
  s_gets (temp.first_name, NAME_MAX);
  if (!(temp.first_name[0]))
  {
    printf ("Stop entering. \n");
    return;
  }
  printf ("Please enter %s's last name: \n", temp.first_name);
  s_gets (temp.last_name, NAME_MAX);

  strcpy (pt_to_change -> name.first_name, temp.first_name);
  strcpy (pt_to_change -> name.last_name, temp.last_name);
}

void search_node (list * pt_list)
{
  int all_count = count_node (pt_list), count;
  list pt_search = *pt_list;
  char ch, str[NAME_MAX];

  if (!*pt_list)
  {
    printf ("No name to search. \n");
    return;
  }

  printf ("Please enter stuff's number (from 1 to %d), first name or last name to delete: \n",
          all_count);
  if (isdigit (ch = getchar()))
  {
    ungetc (ch, stdin);
    scanf ("%d", &count);
    eatline ();

    if (count < 1 || count > all_count)
    {
      printf ("Out of range. \n");
      return;
    }

    select_node_num (count + 1, &pt_search);
    show_one_node (count, pt_search -> name);
  }else
  {
    ungetc (ch, stdin);
    s_gets (str, NAME_MAX);

    (!((strcmp (str, pt_search -> name.first_name)) &&
    (strcmp (str, pt_search -> name.last_name)))) ?
    ({
      show_one_node (1, pt_search -> name);
    }) :
    ({
      count = select_node_str (str, &pt_search) + 1;
      pt_search = pt_search -> next;
      show_one_node (count, pt_search -> name);
    });
  }
}

void select_node_num (int count, list * pt_list)
{
  list scan = *pt_list;

  for (int i = 1; i < count - 1; i ++, *pt_list = scan -> next, scan = *pt_list);
}

int select_node_str (char * str, list * pt_list)
{
  list scan = *pt_list, mark = *pt_list;
  _Bool bol = 0;
  int count = 0;

  while (scan -> next)
  {
    count ++;
    if ((!(strcmp (str, scan -> next -> name.first_name))) ||
    (!(strcmp (str, scan -> next -> name.last_name))))
    {
      bol = 1;
      break;
    }
    *pt_list = scan -> next;
    scan = *pt_list;
  }

  if (!bol)
  {
    *pt_list = NULL;
  }

  return count;
}

int count_node (list * pt_list)
{
  list scan = *pt_list;
  int all_count = 0;

  while (scan)
  {
    scan = scan -> next;
    all_count ++;
  }

  return all_count;
}

void show_list (list * pt_list, void (* pfun)(int count, full_name item))
{
  int count = 1;

  for (list scan = *pt_list; scan; scan = scan -> next, count ++)
  {
    pfun (count, scan -> name);
  }
}

void show_one_node (int count, full_name item)
{
  (item.last_name[0]) ?
  ({printf ("%d: %s %s. \n", count, item.first_name, item.last_name);}) :
  ({printf ("%d: %s. \n", count, item.first_name);});
}

void free_all (list * pt_list)
{
  list scan;

  while (*pt_list)
  {
    scan = (*pt_list) -> next;
    free (*pt_list);
    *pt_list = scan;
  }
}
