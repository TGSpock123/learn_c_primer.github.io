#include "../s_gets.h"
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10

struct book
{
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
};

int main (void)
{
  struct book library[MAXBKS];
  int count;
  int index, filecount;
  FILE * pbooks;
  int size = sizeof (struct book);

  if (!(pbooks = fopen("book.dat", "a + b")))
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
    printf ("%s by %s: $%.2f \n", library[count].title, library[count].author, library[count].value);
  }

  filecount = count;
  if (count == MAXBKS)
  {
    fputs ("The book.dat file is full.", stderr);
    exit (2);
  }

  puts ("Please add new book titles. ");
  puts ("Enter empty line to stop: ");

  while (count < MAXBKS && (s_gets (library[count].title, MAXTITL)) && (library[count].title[0]))
  {
    puts ("Now enter the author: ");
    s_gets (library[count].author, MAXAUTL);
    puts ("Now enter the value: ");
    scanf ("%f", &library[count ++].value);
    while (getchar() != '\n');
    if (count < MAXBKS)
    {
      puts ("Enter next title");
    }
  }

  if (count > 0)
  {
    puts ("Here is the list of your books: ");
    for (index = 0; index < count; index ++)
    {
      printf ("%s by %s: $%.2f \n", library[index].title, library[index].author, library[index].value);
    }
    fwrite (&library[filecount], size, count - filecount, pbooks);
  }else
  {
    puts ("No books? Too bad. ");
  }

  puts ("Thank you for using. ");

  fclose (pbooks);
  return 0;
}
