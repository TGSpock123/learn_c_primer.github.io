#include <stdio.h>
#define FUNDLEN 50

struct funds
{
  char bank[FUNDLEN];
  double bankfund;
  char save[FUNDLEN];
  double savefund;
};

double sum (double x, double y);
double sum1 (const struct funds * money);
double sum2 (struct funds moolah);

int main (void)
{
  struct funds stan ={
      "Garlic-Melon Bank",
      4032.27,
      "Lucky's Savings and Loan",
      8543.94
  };

  printf ("Stan has a total of $%.2f. (in passing numbers)\n", sum(stan.bankfund, stan.savefund));
  printf ("Stan has a total of $%.2f. (in passing adress)\n", sum1 (&stan));
  printf ("Stan has a total of $%.2f. (in passing struct)\n", sum2 (stan));
  return 0;
}

double sum (double x, double y)
{
  return (x + y);
}

double sum1 (const struct funds * money)
{
  return ((money -> bankfund) + (money -> savefund));
}

double sum2 (struct funds moolah)
{
  return (moolah.bankfund + moolah.savefund);
}