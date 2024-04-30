#include "../s_gets.h"

struct month
{
  char month[10];
  char mon[4];
  int day;
  int mon_no;
}all_mon[12];

struct gas
{
  float distance;
  float gals;
  float mpq;
};

struct gas test (struct gas tes);

char * fun (char *, char);
char * (* fun1)(char * , char);

int main (void)
{
  fun1 = fun;
  (*fun1)("asdf", 'a');
  return 0;
}