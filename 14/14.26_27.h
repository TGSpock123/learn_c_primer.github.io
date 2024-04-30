#include "../s_gets.h"
#define MAXNAME 20
#define PLAYERS 18

struct name
{
  char f_name[MAXNAME];
  char l_name[MAXNAME];
};

struct player
{
  int number;
  struct name name;
  int show_times;
  int hit;
  int walk;
  int RBI;
  float a_hit;
};