#include <stdio.h>
#include <stdlib.h>

#define mask_id 0xFF
#define write_id 0x1
#define mask_size 0xFF00
#define write_size 0x100
#define mask_align 0xF0000
#define write_align 0x10000
#define mask_bold 0x100000
#define mask_ital 0x200000
#define mask_udline 0x400000

struct font_para
{
  unsigned int font_id: 8;
  unsigned int font_size: 7;
  unsigned int: 1;
  unsigned int font_align: 2;
  unsigned int: 2;
  _Bool if_bold: 1;
  _Bool if_ital: 1;
  _Bool if_udline: 1;
};

void put_menu (struct font_para * setings);
void print_para (struct font_para * seted);
void print_paraandmenu (struct font_para * setings);
void change_fid (struct font_para * setings);
void change_fsize (struct font_para * setings);
void change_align (struct font_para * setings);
void if_BIU (struct font_para * setings, char ch);
_Bool change_bool (char * pt);
void print_para1 (unsigned int * seted);
void print_paraandmenu1 (unsigned int * setings);
void put_menu1 (unsigned int * setings);
void change_fid1 (unsigned int * setings);
void change_fsize1 (unsigned int * setings);
void change_align1 (unsigned int * setings);
void if_BIU1 (unsigned int * setings, char ch);
void change_bool1 (char * pt, unsigned int * setings, unsigned int mask_1_in_3);

void print_para (struct font_para * seted)
{
  char align[][7] = {
      "left\0", "middle\0", "right\0"
  };
  char if_BIU[][4] = {
      "off\0", "on\0"
  };

  printf ("   ID   SIZE   ALIGMENT   BOLD   ITAL   UDL   \n");
  printf ("%5d%7d%10s%7s%7s%7s\n",
          seted -> font_id, seted -> font_size, align[seted -> font_align],
          if_BIU[seted -> if_bold], if_BIU[seted -> if_ital], if_BIU[seted -> if_udline]);
}

void put_menu (struct font_para * setings)
{
  char ch;

  printf ("Do you need to change some settings? \n");
  printf ("f) change font;   s) change size;   a) change alignment; \n");
  printf ("b) toggle bold;   i) toggle ital;   u) toggle underline; \n");
  printf ("q) quit; \n");
  printf ("Selecet a setting, all OK with q: \n");

  scanf ("%c", &ch);
  while (getchar () != '\n');

  switch (ch)
  {
    case 'f':
      change_fid (setings);
      print_paraandmenu (setings);
    case 's':
      change_fsize (setings);
      print_paraandmenu (setings);
    case 'a':
      change_align (setings);
      print_paraandmenu (setings);
    case 'b':
    case 'i':
    case 'u':
      if_BIU (setings, ch);
      print_paraandmenu (setings);
    case 'q':
      printf ("The settings you've chosen: \n");
      print_para (setings);
      printf ("Thank you for using. \n");
      exit (0);
    default:
      printf ("Please enter a correct input. \n");
      put_menu (setings);
  }
}

void print_paraandmenu (struct font_para * setings)
{
  print_para (setings);
  put_menu (setings);
}

void change_fid (struct font_para * setings)
{
  int temp;

  printf ("Choose a font ID number: \n");

  for (; ; )
  {
    if (scanf ("%d", &temp))
    {
      if ((temp > 0) && (temp < 255))
      {
        while (getchar () != '\n');
        break;
      }
    }
    while (getchar () != '\n');

    printf ("Please enter a correct input. \n");
  }

  setings -> font_id = temp;
}

void change_fsize (struct font_para * setings)
{
  int temp;

  printf ("Choose a font size number: \n");

  for (; ; )
  {
    if (scanf ("%d", &temp))
    {
      if ((temp > 0) && (temp < 127))
      {
        while (getchar () != '\n');
        break;
      }
    }
    while (getchar () != '\n');

    printf ("Please enetr a correct input. \n");
  }

  setings -> font_size = temp;
}

void change_align (struct font_para * setings)
{
  char temp;

  printf ("Choose a way of alignment: \n");
  printf ("1) left;   2) middle;   3) right;\n");

  while ((temp = getchar()))
  {
    if ((temp == '1') || (temp == '2') || (temp == '3'))
    {
      while (getchar () != '\n');
      break;
    }

    printf ("Please enter a correct input. \n");
    while (getchar () != '\n');
  }

  setings -> font_align = temp - 49;
}

void if_BIU (struct font_para * setings, char ch)
{
  char BIU[][10] = {
      "bold\0", "italic\0", "underline\0"
  }, * pt;

  switch (ch)
  {
    case 'b':
      pt = BIU[0];
      setings -> if_bold = change_bool (pt);
      break;
    case 'i':
      pt = BIU[1];
      setings -> if_ital = change_bool (pt);
      break;
    case 'u':
      pt = BIU[2];
      setings -> if_udline = change_bool (pt);
      break;
  }
}

_Bool change_bool (char * pt)
{
  char temp;

  printf ("Do you want the font to be %s? \n", pt);
  printf ("1) %s;   0) not %s\n", pt, pt);

  while ((temp = getchar()))
  {
    if ((temp == '1') || (temp == '0'))
    {
      while (getchar () != '\n');
      break;
    }

    printf ("Please enter a correct input. \n");
    while (getchar () != '\n');
  }

  return temp - 48;
}

void print_para1 (unsigned int * seted)
{
  char align[][7] = {
      "left\0", "middle\0", "right\0"
  };
  char if_BIU[][4] = {
      "off\0", "on\0"
  };

  printf ("   ID   SIZE   ALIGMENT   BOLD   ITAL   UDL   \n");
  printf ("%5d%7d%10s%7s%7s%7s\n",
          *seted & mask_id, (*seted & mask_size) >> 8, align[(*seted & mask_align) >> 16],
          if_BIU[(*seted & mask_bold) >> 20], if_BIU[(*seted & mask_ital) >> 21], if_BIU[(*seted & mask_udline) >> 22]);
}

void put_menu1 (unsigned int * setings)
{
  char ch;

  printf ("Do you need to change some settings? \n");
  printf ("f) change font;   s) change size;   a) change alignment; \n");
  printf ("b) toggle bold;   i) toggle ital;   u) toggle underline; \n");
  printf ("q) quit; \n");
  printf ("Selecet a setting, all OK with q: \n");

  scanf ("%c", &ch);
  while (getchar () != '\n');

  switch (ch)
  {
    case 'f':
      change_fid1 (setings);
      print_paraandmenu1 (setings);
    case 's':
      change_fsize1 (setings);
      print_paraandmenu1 (setings);
    case 'a':
      change_align1 (setings);
      print_paraandmenu1 (setings);
    case 'b':
    case 'i':
    case 'u':
      if_BIU1 (setings, ch);
      print_paraandmenu1 (setings);
    case 'q':
      printf ("The settings you've chosen: \n");
      print_para1 (setings);
      printf ("Thank you for using. \n");
      exit (0);
    default:
      printf ("Please enter a correct input. \n");
      put_menu1 (setings);
  }
}

void print_paraandmenu1 (unsigned int * setings)
{
  print_para1 (setings);
  put_menu1 (setings);
}

void change_fid1 (unsigned int * setings)
{
  int temp;

  printf ("Choose a font ID number: \n");

  for (; ; )
  {
    if (scanf ("%d", &temp))
    {
      if ((temp > 0) && (temp < 255))
      {
        while (getchar () != '\n');
        break;
      }
    }
    while (getchar () != '\n');

    printf ("Please enter a correct input. \n");
  }

  *setings &= (~ mask_id);
  *setings &= (write_id * temp);
}

void change_fsize1 (unsigned int * setings)
{
  int temp;

  printf ("Choose a font size number: \n");

  for (; ; )
  {
    if (scanf ("%d", &temp))
    {
      if ((temp > 0) && (temp < 127))
      {
        while (getchar () != '\n');
        break;
      }
    }
    while (getchar () != '\n');

    printf ("Please enetr a correct input. \n");
  }

  *setings &= (~ mask_size);
  *setings &= (write_size * temp);
}

void change_align1 (unsigned int * setings)
{
  char temp;

  printf ("Choose a way of alignment: \n");
  printf ("1) left;   2) middle;   3) right;\n");

  while ((temp = getchar()))
  {
    if ((temp == '1') || (temp == '2') || (temp == '3'))
    {
      while (getchar () != '\n');
      break;
    }

    printf ("Please enter a correct input. \n");
    while (getchar () != '\n');
  }

  *setings &= (~ mask_align);
  *setings &= (write_align * temp);
}

void if_BIU1 (unsigned int * setings, char ch)
{
  char BIU[][10] = {
      "bold\0", "italic\0", "underline\0"
  }, * pt;

  switch (ch)
  {
    case 'b':
      pt = BIU[0];
      change_bool1 (pt, setings, mask_bold);
      break;
    case 'i':
      pt = BIU[1];
      change_bool1 (pt, setings, mask_ital);
      break;
    case 'u':
      pt = BIU[2];
      change_bool1 (pt, setings, mask_udline);
      break;
  }
}

void change_bool1 (char * pt, unsigned int * setings, unsigned int mask_1_in_3)
{
  char temp;

  printf ("Do you want the font to be %s? \n", pt);
  printf ("1) %s;   0) not %s\n", pt, pt);

  while ((temp = getchar()))
  {
    if ((temp == '1') || (temp == '0'))
    {
      while (getchar () != '\n');
      break;
    }

    printf ("Please enter a correct input. \n");
    while (getchar () != '\n');
  }

  *setings &= (~ mask_1_in_3);
  *setings |= ((temp - 48) * mask_1_in_3);
}
