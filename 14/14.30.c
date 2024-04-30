#include "14.29_30_1.h"

int main (void)
{
  int flight_num;

  for (int i = 0; i < FLIGHTS; i ++)
  {
    init (all_flights[i]);
  }

  printf ("Flight today: 102, 311, 444, 519. \n");
  printf ("Please enter your flight number, q to quit: \n");
  while (scanf ("%d", &flight_num))
  {
    while (getchar() != '\n');

    switch (flight_num)
    {
      case 102:
        runs (all_flights[0]);
        break;
      case 311:
        runs (all_flights[1]);
        break;
      case 444:
        runs (all_flights[2]);
        break;
      case 519:
        runs (all_flights[3]);
        break;
      default:
        printf ("Please enter a correct flight number. \n");
        break;
    }

    printf ("Please enter your flight number, q to quit: \n");
  }

  printf ("Thank you for using. \n");

  return 0;
}
