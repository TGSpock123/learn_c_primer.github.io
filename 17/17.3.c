#include "../s_gets.h"

#define NAME_MAX 20

struct one_person
{
  char f_name[NAME_MAX];
  char l_name[NAME_MAX];
  int num;
  struct one_person * next;
};

int main (void)
{
  struct one_person * head = NULL, * cur, * pre;
  int count = 0;
  char temp[NAME_MAX];

  printf ("Please enter member's first name: \n");
  while (s_gets (temp, NAME_MAX) && temp[0])
  {
    if ((cur = (struct one_person *) malloc (sizeof (struct one_person))) == NULL)
    {
      printf ("Allocated failed. \n");
      exit (0);
    }

    count ++;
    cur -> num = count;
    strcpy (cur -> f_name, temp);
    printf ("Please enter %s's last name. \n", cur -> f_name);
    s_gets (temp, NAME_MAX);
    strcpy (cur -> l_name, temp);
    (head) ? (pre -> next = cur) : (head = cur);

    cur -> next = NULL;
    printf ("Please enter next one's first name: \n");
    pre = cur;
  }
//cur -> next = head;

  if (!head)
  {
    printf ("No data entered. \n");
    return (0);
  }

  printf ("Here' s the name list: \n");
  cur = head;
  while (cur)
  {
    printf ("%d: %s %s, storaged at %p, next name at %p. \n",
            cur -> num, cur -> f_name, cur -> l_name, head, cur -> next);
    head = cur -> next;
    free (cur);
    cur = head;
  }

  printf ("Thank you for using. \n");
  return 0;
}
