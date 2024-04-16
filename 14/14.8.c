#include <stdio.h>
#define MAXTITL 41
#define MAXAUTL 31

struct book
{
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
};

int main (void)
{
  struct book readfirst;
  int score;

  printf ("enter test score: \n");
  scanf ("%d", &score);

  if (score >= 84)
  {
    readfirst = (struct book){
        "crime and punishment",
        "fyodor dostoyevsky",
        11.25
    };
  }else
  {
    readfirst = (struct book){
        "mr. brouncy's nice hat",
        "fred winsome",
        5.99
    };
  }

  printf ("your assignd reading: \n");
  printf ("%s by %s, $%.2f", readfirst.title, readfirst.author, readfirst.value);
  return 0;
}