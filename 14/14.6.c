#include "../s_gets.h"
#define SLEN 81

struct namect
{
  char * fname;   //危险操作, 确定好有已经分配好的内存;
  char * lname;
  int letters;
};

void getinfo (struct namect *);
void makeinfo (struct namect *);
void showinfo (const struct namect *);
void cleanup (struct namect *);

int main (void)
{
  struct namect person;

  person.fname = (char *) malloc (SLEN + 1);    //分配内存;
  person.lname = (char *) malloc (SLEN + 1);
  getinfo (&person);
  makeinfo (&person);
  showinfo (&person);
  cleanup (&person);

  return 0;
}

void getinfo (struct namect * pst)
{
  char temp[SLEN];
  //pst -> fname = (char *) malloc (strlen (temp) + 1);    //分配内存, 和上面都可以;
  //pst -> lname = (char *) malloc (strlen (temp) + 1);

  printf ("please enter your first name. \n");
  s_gets (temp, SLEN);
  strcpy (pst -> fname, temp);
  printf ("please enter your last name. \n");
  s_gets (temp, SLEN);
  strcpy (pst -> lname, temp);
}

void makeinfo (struct namect * pst)
{
  pst -> letters = strlen (pst -> fname) + strlen (pst -> lname);
}

void showinfo (const struct namect * pst)
{
  printf ("dear %s %s, your name contains %d letters. \n",
          pst -> fname, pst -> lname, pst -> letters);
}

void cleanup (struct namect * pst)
{
  free (pst -> fname);
  free (pst -> lname);
}