#include "../s_gets.h"
#define LEN 20

struct full_name
{
  char f_name[LEN];
  char m_name[LEN];
  char l_name[LEN];
};
struct member_info
{
  char meb_ID[LEN];
  struct full_name meb_name;
};

void put (struct member_info meb_info);

int main (void)
{
  struct member_info meb_info[5];
  char temp[3][LEN], ch;
  int cot = 0;

  printf ("This programme prints your member's name and ID. \n");

  do
  {
    printf ("Please enter member's name: \n");

    for (int j = 0; j < 3; j ++)
    {
      temp[j][0] = '\0';
    }

    for (int p = 0; (p < 3) && ((ch = getchar ()) != '\n'); p ++)
    {
      ungetc (ch, stdin);
      scanf ("%s", temp[p]);
    }

    if (temp[2][0])
    {
      getchar ();
    }

    if (!temp[0][0])
    {
      printf ("No input. \n");
      break;
    }

    strcpy (meb_info[cot].meb_name.f_name, temp[0]);

    if (temp[1][0])
    {
      if (temp[2][0])
      {
        strcpy (meb_info[cot].meb_name.m_name, temp[1]);
        strcpy (meb_info[cot].meb_name.l_name, temp[2]);
      }else
      {
        strcpy (meb_info[cot].meb_name.l_name, temp[1]);
        meb_info[cot].meb_name.m_name[0] = '\0';
      }
    }

    printf ("Please enter his/hers identify number: \n");
    s_gets (meb_info[cot].meb_ID, LEN);

    cot ++;
  }while (cot < 5);

  for (int count = 0; count < cot; count ++)
  {
    put (meb_info[count]);
  }

  return 0;
}

void put (struct member_info meb_info)
{
  (meb_info.meb_name.m_name[0]) ?
  (printf ("%s %c. %s",meb_info.meb_name.f_name, meb_info.meb_name.m_name[0], meb_info.meb_name.l_name)) :
  (printf ("%s %s", meb_info.meb_name.f_name, meb_info.meb_name.l_name));
  printf ("  --  %s\n", meb_info.meb_ID);
}