#include "17.6_7.h"

int main (void)
{
  list head;
  _Bool continue_or_not = 1;

  init_pt (&head);

  while (continue_or_not)
  {
    switch (show_menu ())
    {
      case 'a':
        if (if_list_full ())
        {
          printf ("No room for add, delete, change or search still avalible. \n");
          break;
        }
        add_node (&head);
        printf ("Here's your list after add: \n");
        show_list (&head, show_one_node);
        break;
      case 'b':
        delete_node (&head);
        printf ("Here's your list after delete: \n");
        show_list (&head, show_one_node);
        break;
      case 'c':
        change_node (&head);
        printf ("Here's your list after change: \n");
        show_list (&head, show_one_node);
        break;
      case 'd':
        printf ("Here's the one you are searching: \n");
        search_node (&head);
        break;
      case 'q':
        continue_or_not = 0;
        printf ("Here's the list after modify: \n");
        show_list (&head, show_one_node);
        break;
    }
  }

  printf ("Thank you for using. \n");
  free_all (&head);
  return 0;
}
