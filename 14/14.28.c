#include "../s_gets.h"
#include <unistd.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10

struct book
{
  int number;
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
  int bol;
};

int main (void)
{
  struct book library[MAXBKS];
  int count, bk_number, index;
  FILE * pbooks;
  int size = sizeof (struct book);
  char sig;

  if (!(pbooks = fopen("book.dat", "r + b")))
  {
    fputs ("Can't open book.dat file \n", stderr);
    exit (1);
  }

  rewind (pbooks);

  for (count = 0; count < MAXBKS && (fread (&library[count], size, 1, pbooks)); count ++)
  {
    if (count == 0)
    {
      puts ("Current contents of book.dat: ");
    }
    library[count].number = count + 1;
    printf ("%d  %s by %s: $%.2f \n", library[count].number, library[count].title, library[count].author, library[count].value);
    library[count].bol = 1;
  }

  if (count == MAXBKS)
  {
    fputs ("The book.dat file is full.", stderr);
    exit (2);
  }

  printf ("Please enter a letter to choose mode, \n"
          "n is for enter a new book, d is for delete book, r is for replace book, other to stop: \n");
  sig = getchar ();
  if (sig != '\n')
  {
    getchar ();
  }

  while ((sig == 'n') || (sig == 'd') || (sig == 'r'))
  {
    if (sig == 'n')
    {
      if (count == MAXBKS)
      {
        printf ("The book.dat is full, please enter another letter. \n");
        continue;
      }

      puts ("Please add new book titles. ");
      puts ("Enter empty line to quit: ");

      if ((s_gets (library[count].title, MAXTITL)) && (library[count].title[0]))
      {
        library[count].bol = 1;
        puts ("Now enter the author: ");
        s_gets (library[count].author, MAXAUTL);
        puts ("Now enter the value: ");
        scanf ("%f", &library[count ++].value);
        while (getchar() != '\n');
      }
    }else if (sig == 'd')
    {
      printf ("Please enter which book do you want to delete: \n");
      scanf ("%d", &bk_number);
      while (getchar() != '\n');
      while ((bk_number > count +  1) || (bk_number < 0))
      {
        printf ("Please enter a correct number. \n");
        scanf ("%d", &bk_number);
        while (getchar() != '\n');
      }
      library[bk_number - 1].bol = 0;
      printf ("The book NO.%d has been deleted. \n", bk_number);
    }else
    {
      printf ("Please enter which book do you want to replace: \n");
      scanf ("%d", &bk_number);
      while (getchar() != '\n');
      while ((bk_number > count +  1) || (bk_number < 0))
      {
        printf ("Please enter a correct number. \n");
        scanf ("%d", &bk_number);
        while (getchar() != '\n');
      }

      puts ("Please enter a new book titles to replace. ");
      puts ("Enter empty line to quit: ");

      if ((s_gets (library[bk_number - 1].title, MAXTITL)) && (library[bk_number - 1].title[0]))
      {
        puts ("Now enter the author: ");
        s_gets (library[bk_number - 1].author, MAXAUTL);
        puts ("Now enter the value: ");
        scanf ("%f", &library[bk_number - 1].value);
        while (getchar() != '\n');
      }
    }
    printf ("Enter next letter. \n");
    sig = getchar();
    if (sig != '\n')
    {
      getchar ();
    }
  }

  //ftruncate(fileno (pbooks), 0);
  //rewind (pbooks);
  fclose (pbooks);
  pbooks = fopen ("book.dat", "w + b");

  if (count > 0)
  {
    puts ("Here is the list of your books: ");
    for (index = 0; index < count; index ++)
    {
      if (library[index].bol)
      {
        printf ("%s by %s: $%.2f \n", library[index].title, library[index].author, library[index].value);
        fwrite (&library[index], size, 1, pbooks);
      }
    }
  }else
  {
    puts ("No books? Too bad. ");
  }

  puts ("Thank you for using. ");

  fclose (pbooks);
  return 0;
}
