#include "../s_gets.h"
#define MAXNAME 20
#define SEAT_TOT 12
#define FLIGHTS 4

const char menu[][50] = {
    "To choose a function, enter its letter label: ",
    "a) Show number of empty seats",
    "b) Show list of empty seats",
    "c) Show alphabetical list of seats",
    "d) Assign a customer to seat assignment",
    "e) Delete a seat assignment",
    "f) Quit",
    "-------------------------------------------------"
};

struct seat
{
  int seat_num;
  _Bool if_seat_sold;
  char f_name[MAXNAME];
  char l_name[MAXNAME];
};

typedef struct seat one_flight[SEAT_TOT];
one_flight all_flights[FLIGHTS];

void pt_menu (void);
void show_empty_seats_num (struct seat seats[SEAT_TOT]);
void show_seats_list_num (struct seat seats[SEAT_TOT]);
void show_seats_list_let (struct seat seats[SEAT_TOT]);
void assign_cus (struct seat seats[SEAT_TOT]);
void del_passenger (struct seat seats[]);
void runs (struct seat seats[]);

void pt_menu (void)
{
  for (int i = 0; i < sizeof (menu) / sizeof (menu[0]); i ++)
  {
    printf ("%s\n", menu[i]);
  }
}

void show_empty_seats_num (struct seat seats[SEAT_TOT])
{
  printf ("Numbers of remaining seats: \n");

  for (int i = 0; i < SEAT_TOT; i ++)
  {
    if (!seats[i].if_seat_sold)
    {
      printf ("  %d", seats[i].seat_num);
    }
  }

  putchar ('\n');
}

void show_seats_list_num (struct seat seats[SEAT_TOT])
{
  printf ("Seats list: \n");

  for (int i = 0; i < SEAT_TOT; i ++)
  {
    printf (" %2d", seats[i].seat_num);
    (seats[i].if_seat_sold) ?
    printf (", Has been assigned by %s %s. \n", seats[i].f_name, seats[i].l_name) :
    printf (", Is for sale. \n");
  }

  putchar ('\n');
}

void show_seats_list_let (struct seat seats[SEAT_TOT])
{
  printf ("Seats list: \n");
  for (int i = 0; i < SEAT_TOT; i ++)
  {
    printf (" %2c", (seats[i].seat_num + 64));
    (seats[i].if_seat_sold) ?
    printf (", Has been assigned by %s %s. \n", seats[i].f_name, seats[i].l_name) :
    printf (", Is for sale. \n");
  }
}

void assign_cus (struct seat seats[SEAT_TOT])
{
  char input[3];
  int chan_input;
  char confirm, confirmer[] = {
      'n', 'N', 'y', 'Y', '\n'
  };

  printf ("Please enter the seat you'd like to assign: \n");
  s_gets (input, 3);

  while (1)
  {
    chan_input = 0;

    if (isdigit (input[0]))
    {
      chan_input = (isdigit (input[1])) ? ((input[1] - 48) + (input[0] - 48) * 10) : (input[0] - 48);
    }else if (isalpha (input[0]))
    {
      chan_input = (islower (input[0])) ? (input[0] - 96) : (input[0] - 64);
    }

    if ((chan_input > 0) && (chan_input < 13))
    {
      if (seats[chan_input - 1].if_seat_sold)
      {
        printf ("This seat has been located, please choose another. \n");
        s_gets (input, 3);
        continue;
      }else
      {
        break;
      }
    }

    printf ("Please enter a correct number. \n");
    s_gets (input, 3);
  }

  printf ("Please enter your first name: \n");
  s_gets (seats[chan_input - 1].f_name, MAXNAME);
  printf ("Please enter your last name: \n");
  s_gets (seats[chan_input - 1].l_name, MAXNAME);

  printf ("Confirm Passenger: %d, %s %s\n",
          seats[chan_input - 1].seat_num, seats[chan_input - 1].f_name, seats[chan_input - 1].l_name);
  printf ("Is that right? (y / n) \n");

  do
  {
    confirm = getchar();

    if (confirm != '\n')
    {
      while (getchar() != '\n');
    }

    if (strchr (confirmer, confirm))
    {
      break;
    }
    printf ("Please enter a correct letter: \n");
  }while (1);

  if ((confirm == 'n') || (confirm == 'N'))
  {
    assign_cus (seats);
  }else
  {
    seats[chan_input - 1].if_seat_sold = 1;
  }
}

void del_passenger (struct seat seats[])
{
  char input[3];
  int chan_input;
  int bol_plus = 0;

  for (int i = 0; i < SEAT_TOT; i ++)
  {
    bol_plus += (int)seats[i].if_seat_sold;
  }

  if (!bol_plus)
  {
    printf ("Error: No seat has been located. \n");
    return;
  }

  printf ("Please enter the seat you'd like to assign: \n");
  s_gets (input, 3);

  while (1)
  {
    chan_input = 0;

    if (isdigit (input[0]))
    {
      chan_input = (isdigit (input[1])) ? ((input[1] - 48) + (input[0] - 48) * 10) : (input[0] - 48);
    }else if (isalpha (input[0]))
    {
      chan_input = (islower (input[0])) ? (input[0] - 96) : (input[0] - 64);
    }

    if ((chan_input > 0) && (chan_input < 13))
    {
      if (!seats[chan_input - 1].if_seat_sold)
      {
        printf ("This seat hasn't been located, please choose another. \n");
        s_gets (input, 3);
        continue;
      }else
      {
        break;
      }
    }

    printf ("Please enter a correct number. \n");
    s_gets (input, 3);
  }

  seats[chan_input - 1].if_seat_sold = 0;
  printf ("Now No.%d seat is for sale. \n", seats[chan_input - 1].seat_num);
}

void runs (struct seat seats[])
{
  char sig;

  pt_menu ();
  while ((sig = tolower(getchar ())) != 102)
  {
    if (sig != '\n')
    {
      while (getchar() != '\n');
    }

    switch (sig)
    {
      case 'a':
        show_empty_seats_num (seats);
        break;
      case 'b':
        show_seats_list_num (seats);
        break;
      case 'c':
        show_seats_list_let (seats);
        break;
      case 'd':
        assign_cus (seats);
        break;
      case 'e':
        del_passenger (seats);
        break;
      default:
        printf ("Choose a correct letter. \n");
        break;
    }

    pt_menu ();
  }
}

void init (struct seat seats[])
{
  for (int i = 0; i < SEAT_TOT; i ++)
  {
    seats[i].seat_num = i + 1;
    seats[i].if_seat_sold = 0;
  }
}
