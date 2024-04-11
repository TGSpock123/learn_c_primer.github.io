#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[])
{
  char ch, buf[256];
  FILE* fp1;

  if (argc < 3)
  {
    printf("handle failure. \n");
    exit(EXIT_FAILURE);
  }
  else;

  if ((fp1 = fopen(argv[2], "r")) == NULL)
  {
    printf("open %s failure. \n", argv[2]);
    exit(EXIT_FAILURE);
  }
  else;

  ch = argv[1][0];
  setvbuf(fp1, buf, _IOLBF, sizeof(buf));

  while (fgets(buf, 256, fp1))
  {
    for (int i = 0; buf[i] != '\0'; i ++)
    {
      if (buf[i] == ch)
      {
        fputs(buf, stdout);
        break;
      }
    }
  }
  
  fclose(fp1);
  return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  char ch, buf[256];
  FILE* fp1;

  if (argc < 3) {
    printf("Usage: %s filename character\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  fp1 = fopen(argv[2], "r");
  if (fp1 == NULL) {
    printf("Failed to open %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  ch = argv[1][0];

  setvbuf(fp1, buf, _IOLBF, sizeof(buf));

  while (fgets(buf, sizeof(buf), fp1)) {
    for (int i = 0; buf[i] != '\n'; i++) {
      if (buf[i] == ch) {
        fputs(buf, stdout);
        break;
      }
    }
  }

  fclose(fp1);
  return 0;
}
*/