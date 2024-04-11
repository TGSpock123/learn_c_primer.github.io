#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
  FILE* fp;
  double ret = 0, num;
  int cot = 0;

  if (argc == 2) 
  {
    if ((fp = fopen(argv[1], "r")) == NULL) 
    {
      printf("wrong in opening %s. \n", argv[1]);
      exit(EXIT_FAILURE);
    }
  }
  else if (argc == 1) 
  {
    fp = stdin;
    printf("please enter numbers, q to quit: \n");
  }
  else 
  {
    printf("fullstop. \n");
    exit(EXIT_FAILURE);
  }

  while (fscanf(fp, "%lf", &num) == 1) 
  {
    ret += num;
    cot++;
  }

  if (cot != 0) 
  {
    ret /= cot;
    printf("%lf\n", ret);
  }
  else 
  {
    printf("No numbers read.\n");
  }

  fclose(fp);
  return 0;
}
