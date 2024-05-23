#include "17.9.h"

#define MIN_PER_HOUR 60.0

bool if_new_cus (double x);
item cus_time (long when);

int main (void)
{
  the_queue line;
  item temp;
  int hours, per_hour, wait_time = 0;
  long cycle, cycle_limit, turn_aways = 0, cus = 0, served = 0, sum_line = 0, line_wait = 0;
  double min_per_cus;

  init_queue (&line);
  srand ((unsigned int)time(0));

  printf ("Case study: Sigmund Lander's Advice Booth. \n");
  printf ("Please enter the number of simulation hours: \n");
  while (!(scanf ("%d", &hours)))
  {
    eatline ();
    printf ("Please enter a correct number. \n");
  }
  eatline ();
  cycle_limit = MIN_PER_HOUR * hours;

  printf ("Please enter the number of average number of customers per hour: \n");
  while (!(scanf ("%d", &per_hour)))
  {
    eatline ();
    printf ("Please enter a correct number. \n");
  }
  eatline ();
  min_per_cus = MIN_PER_HOUR / per_hour;

  for (cycle = 0; cycle < cycle_limit; cycle ++)
  {
    if (if_new_cus (min_per_cus))
    {
      (if_queue_full (&line)) ?
      ({
        turn_aways ++;
      }) :
      ({
        cus ++;
        temp = cus_time (cycle);
        add_to_queue (temp, &line);
      });
    }

    if ((wait_time <= 0) && (!(if_queue_empty (&line))))
    {
      del_from_queue (&temp, &line);
      wait_time = temp.process_time;
      line_wait += (cycle - temp.arrive);
      served ++;
    }

    if (wait_time > 0)
    {
      wait_time --;
    }

    sum_line += count_queue_item (&line);
  }

  (cus > 0) ?
  ({
    printf ("Custumers accepted: %ld; \n", cus);
    printf ("Custumers severd: %ld; \n", served);
    printf ("Custumers turnaways: %ld; \n", turn_aways);
    printf ("Average queue size: %.2f; \n", (double) sum_line / cycle_limit);
    printf ("Average wait time: %.2f. \n", (double) line_wait / served);
  }) :
  ({
    printf ("No custumers. \n");
  });

  queue_clear (&line);
  printf ("Thank you for using. \n");
  return 0;
}

bool if_new_cus (double x)
{
  return ((rand () * x / RAND_MAX) < 1);
}

item cus_time (long when)
{
  item cus;

  cus.process_time = rand () % 3 + 1;
  cus.arrive = when;

  return cus;
}
