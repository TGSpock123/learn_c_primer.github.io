#include "../s_gets.h"
#define NLEN 30

struct namect
{
  char fname[NLEN];
  char lname[NLEN];
  int letters;
};

void getinfo (struct namect * pst);
void makeinfo (struct namect * pst);
void showinfo (const struct namect * pst);

struct namect getinfo1 (void);
struct namect makeinfo1 (struct namect);
void showinfo1 (struct namect);

int main (void)
{
  struct namect person;

  getinfo (&person);
  makeinfo (&person);
  showinfo (&person);

  person = getinfo1();
  person = makeinfo1 (person);
  showinfo1 (person);

  return 0;
}

void getinfo (struct namect * pst)
{
  printf ("please enter your first name: \n");
  s_gets (pst -> fname, NLEN);
  printf ("please enter your last name: \n");
  s_gets (pst -> lname, NLEN);
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

struct namect getinfo1 (void)
{
  struct namect temp;

  printf ("please enter your first name. \n");
  s_gets (temp.fname, NLEN);
  printf ("please enter your last name. \n");
  s_gets (temp.lname, NLEN);

  return temp;
}

struct namect makeinfo1 (struct namect info)
{
  info.letters = strlen (info.fname) + strlen (info.lname);

  return info;
}

void showinfo1 (const struct namect info)
{
  printf ("dear %s %s, your name contains %d letters. \n",
          info.fname, info.lname, info.letters);
}