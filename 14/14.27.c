#include "14.26_27.h"

int main (int argc, char * argv[])
{
  FILE * fp;
  struct player player[PLAYERS];

  if (argc < 2)
  {
    printf ("No enough paraments. \n");
    exit (EXIT_FAILURE);
  }

  if (!(fp = fopen (argv[1], "a + b")))
  {
    printf ("Can't open file. \n");
    exit (EXIT_FAILURE);
  }

  for (int p = 0; (p < PLAYERS) && (fread (&player[p], sizeof (player[1]), 1, fp)); p ++)
  {
    player[p].a_hit = (float) player[p].hit / player[p].show_times;
    printf ("%d  %s %s  %d  %d  %d  %d  %f\n", player[p].number, player[p].name.f_name, player[p].name.l_name,
            player[p].show_times, player[p].hit, player[p].walk, player[p].RBI, player[p].a_hit);
  }

  fclose (fp);
  return 0;
}