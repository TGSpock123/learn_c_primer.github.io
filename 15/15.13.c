#include "15.13_14.h"

int main (void)
{
  union font_para_in2ways
  {
    struct font_para font_para_instruct;
    unsigned int font_para_inuint;
  };

  union font_para_in2ways set_font = {
      1, 12, 0, 0, 0, 0
  };

  print_para (&set_font.font_para_instruct);
  put_menu (&set_font.font_para_instruct);

  return 0;
}