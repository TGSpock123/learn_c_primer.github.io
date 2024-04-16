//被注释掉的是另一种可行操作;
#include "s_gets.h"
#define SLEN 81

char finame[SLEN], laname[SLEN];

struct namect
{
  char * fname;   //危险操作, 确定好有已经分配好的内存;
  char * lname;
  int letters;
};

void getinfo (/*struct namect **/ void);
void makeinfo (struct namect *);
void showinfo (const struct namect *);

int main (void)
{
  struct namect person;

  person.fname = finame;    //分配内存;
  person.lname = laname;

  getinfo (/*&person*/);
  makeinfo (&person);
  showinfo (&person);

  return 0;
}

void getinfo (/*struct namect * pst*/ void)
{
  //pst -> fname = finame;    //分配内存, 在这和在上面都行;
  //pst -> lname = laname;

  printf ("please enter your first name. \n");
  s_gets (laname, SLEN);
  strcpy (finame, laname);
  printf ("please enter your last name. \n");
  s_gets (laname, SLEN);
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
