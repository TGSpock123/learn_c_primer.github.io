#include "14.26_27.h"

int main (int argc, char * argv[])
{
  FILE * fp;
  struct player player;

  if (argc < 2)
  {
    printf ("No enough parameters. \n");
    exit (EXIT_FAILURE);
  }

  if (!(fp = fopen (argv[1], "wb")))
  {
    printf ("can't open file. \n");
    exit (EXIT_FAILURE);
  }

  for (int j = 1; j <= PLAYERS; j ++)
  {
    player.number = j;
    printf ("Please enter player's first name: ");
    s_gets (player.name.f_name, MAXNAME);
    printf ("Please enter player's last name: ");
    s_gets (player.name.l_name, MAXNAME);
    printf ("Please enter %s %s's show times: \n", player.name.f_name, player.name.l_name);
    scanf ("%d", &player.show_times);
    getchar ();
    printf ("Please enter %s %s's hit: \n", player.name.f_name, player.name.l_name);
    scanf ("%d", &player.hit);
    getchar ();
    printf ("Please enter %s %s's walk: \n", player.name.f_name, player.name.l_name);
    scanf ("%d", &player.walk);
    getchar ();
    printf ("Please enter %s %s's RBI: \n", player.name.f_name, player.name.l_name);
    scanf ("%d", &player.RBI);
    getchar ();
    fwrite (&player, sizeof (player), 1, fp);
  }

  fclose (fp);
  return 0;
}