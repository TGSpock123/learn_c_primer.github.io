#include "s_gets.h"
#define BUFSIZE 4096
#define SLEN 81
void append(FILE * source, FILE * dest);

int main(int argc, char * argv[])
{
  FILE * fa, * fs;
  int ch;

  if (argc != 3)
  {
    printf ("open failed. \n");
    exit (EXIT_FAILURE);
  }else;

  if((fa = fopen(argv[2], "a+")) == NULL)
  {
    fprintf(stderr, "Can't open %s\n", argv[2]);
    exit(EXIT_FAILURE);
  }else;

  if(setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
  {
    fputs("Can't create output buffer\n", stderr);
    exit(EXIT_FAILURE);
  }else;

  puts("Enter name of first source file (empty to quit): ");


  if(strcmp(argv[2], argv[1]) == 0)
  {
    fputs("Can't append file to itself\n", stderr);
  }else if((fs = fopen(argv[1], "r")) == NULL)
  {
    fprintf(stderr, "Can't open %s\n", argv[1]);
  }else
  {
    if(setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
    {
      fputs("Can't create input buffer\n", stderr);
    }else;

    append(fs, fa);

    if(ferror(fs) != 0)
    {
      fprintf(stderr, "Error inreadind file %s. \n", argv[1]);
    }

    if(ferror(fa) != 0)
    {
      fprintf(stderr, "Error inreadind file %s. \n", argv[2]);
    }

    fclose(fs);
  }

  rewind(fa);
  printf("%s contents: \n", argv[2]);

  while((ch = getc(fa)) != EOF)
  {
    putchar(ch);
  }

  puts("Done displaying.");
  fclose(fa);

  return 0;
}

void append(FILE * source, FILE * dest)
{
  size_t bytes;
  static char temp[BUFSIZE];

  while((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
  {
    fwrite(temp, sizeof(char), bytes, dest);
  }


  /*
  char ch;

  while ((ch = fgetc(source)) != EOF)
  {
    fputc(ch, dest);
  }
  */
}
