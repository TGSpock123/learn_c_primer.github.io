#include "17.11.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

inline static void eatline (void);
char show_menu (void);
void add_pet (tree * pt);
void drop_pet (tree * pt);
void show_pets (const tree * pt);
void find_pet (const tree * pt);
void print_item (item one_item);
void upper_case (char * str);
char * s_gets (char * st, int n);

int main (void)
{
  tree pets;
  char choice;

  init_tree (&pets);

  while ((choice = show_menu()) != 'q')
  {
    switch (choice)
    {
      case 'a':
        add_pet (&pets);
        break;
      case 'l':
        show_pets (&pets);
        break;
      case 'f':
        find_pet (&pets);
        break;
      case 'n':
        printf ("%d pets in club. \n", count_tree_item (&pets));
        break;
      case 'd':
        drop_pet (&pets);
        break;
      default:
        printf ("Please enter a correct choice. \n");
        break;
    }
  }

  printf ("Thank you for using. \n");
  clear_tree (&pets);
  return 0;
}

inline static void eatline (void)
{
  while (getchar() != '\n');
}

char show_menu (void)
{
  int ch;

  printf ("Nerfville Pet Club Membership Program. \n");
  printf ("Enter the letter corresponding to your choice. \n");
  printf ("a) Add a pet.  l) Show pet list. n) Number of pets. \n");
  printf ("f) Find a pet. d) Delete a pet.  q) Quit. \n");

  while ((ch = getchar()) != EOF)
  {
    eatline ();
    ch = tolower (ch);
    if (!(strchr ("alrfndq", ch)))
    {
      printf ("Please enter a correct choice. \n");
    }else
    {
      break;
    }
  }

  if (ch == EOF)
  {
    ch = 'q';
  }

  return ch;
}

void add_pet (tree * pt)
{
  item temp;

  (if_tree_full (pt)) ?
  ({
    printf ("No room in club. \n");
  }) :
  ({
    printf ("Please enter name of pet. \n");
    s_gets (temp.petname, SLEN);
    printf ("Please enter pet's kind. \n");
    s_gets (temp.petkind, SLEN);
    upper_case (temp.petname);
    upper_case (temp.petkind);

    add_to_tree (&temp, pt);
  });
}

void drop_pet (tree * pt)
{
  item temp;

  if (if_tree_empty (pt))
  {
    printf ("No pet to drop. \n");
    return;
  }

  printf ("Please enter name of your pet to drop. \n");
  s_gets (temp.petname, SLEN);
  printf ("Please enter kind. \n");
  s_gets (temp.petkind, SLEN);
  upper_case (temp.petname);
  upper_case (temp.petkind);

  printf ("%s the %s ", temp.petname, temp.petkind);
  (del_from_tree (&temp, pt)) ?
  ({
    printf ("is dropped from club. \n");
  }) :
  ({
    printf ("is not a club member. \n");
  });
}

void show_pets (const tree * pt)
{
  (if_tree_empty (pt)) ?
  ({
    printf ("No pet in club. \n");
  }) :
  ({
    trav_tree (pt, print_item);
  });
}

void find_pet (const tree * pt)
{
  item temp;

  if (if_tree_empty (pt))
  {
    printf ("No pet to find. \n");
    return;
  }

  printf ("Please enter name of pet you want to find. \n");
  s_gets (temp.petname, SLEN);
  printf ("Please enter its kind. \n");
  s_gets (temp.petkind, SLEN);

  upper_case (temp.petname);
  upper_case (temp.petkind);
  printf ("%s the %s ", temp.petname, temp.petkind);
  (sel_from_tree (&temp, pt)) ?
  ({
    printf ("is in club. \n");
  }) :
  ({
    printf ("is not in this club. \n");
  });
}

void print_item (item one_item)
{
  printf ("Pet: %19s, Kind: %19s. \n", one_item.petname, one_item.petkind);
}

void upper_case (char * str)
{
  while (*str)
  {
    *str = toupper (*str);
    str ++;
  }
}

char * s_gets (char * st, int n)
{
  char * ret_val;
  char * find;

  ret_val = fgets (st, n, stdin);
  if (ret_val)
  {
    find = strchr (st, '\n');
    (find) ?
    ({
      *find = '\0';
    }) :
    ({
      eatline ();
    });
  }

  return ret_val;
}
