#include "../s_gets.h"
#define MAXNAME 30
#define CSIZE 4
#define G_NUM 3

struct name
{
  char name[MAXNAME];
};
struct student
{
  struct name names;
  float grade[G_NUM];
  float a_grade;
};

int main (void)
{
  struct student students[CSIZE];
  int j = 0, p;
  float class_a_grade[G_NUM + 1];

  printf ("This programme prints your student's name, grade and average grade. \n");

  for (p = 0; p <= G_NUM; p ++)
  {
    class_a_grade[p] = 0;
  }
  for (p = 0; p < CSIZE; p ++)
  {
    students[p].a_grade = 0;
  }

  do
  {
    printf ("Please enter student's name: \n");

    s_gets_1 (students[j].names.name, MAXNAME);
    if (!(*students[j].names.name))
    {
      break;
    }
    fflush (stdin);

    printf ("Please enter student's grades: \n");

    for (p = 0; p < G_NUM; p ++)
    {
      scanf ("%f", &students[j].grade[p]);
      students[j].a_grade += students[j].grade[p];
      class_a_grade[p] += students[j].grade[p];
    }
    fflush (stdin);

    students[j].a_grade /= G_NUM;

    class_a_grade[G_NUM] += students[j].a_grade;

    j ++;
  }while (j < CSIZE);

  for (p = 0; p <= j; p ++)
  {
    class_a_grade[p] /= CSIZE;
  }

  for (int p1 = 0; p1 <= 50; p1 ++)
  {
    putchar ('-');
  }
  putchar ('\n');
  for (p = 0; p < j; p ++)
  {
    printf ("Student's name: %s\n", students[p].names.name);
    printf ("Student's avergae grade: %.2f\n", students[p].a_grade);
    for (int p1 = 0; p1 <= 50; p1 ++)
    {
      putchar ('-');
    }
    putchar ('\n');
  }

  (j == 0) ?
  printf ("Thank you for using. \n") :
  printf ("Class' all average grade is %.2f. \n", class_a_grade[G_NUM]);

  return 0;
}
