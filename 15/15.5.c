#include <stdio.h>
#include <stdbool.h>
#define SOLID 0
#define DOTTED 1
#define DASHED 2

#define BLUE 4
#define GREEN 2
#define RED 1

#define BLACK 0
#define YELLOW (RED | GREEN)   //= 3;
#define MAGENTA (RED | BLUE)   //= 5;
#define CYAN (GREEN | BLUE)   //= 6;
#define WHITE (RED | GREEN | BLUE)   //= 7;

const char * colors[8] = {
    "black", "red", "green", "yellow", "blue", "magenta", "cyan", "white"
};

/*  示例代码;
struct prnt
{
  unsigned int autfd: 1;
  unsigned int bidfc: 1;
  unsigned int undln: 1;
  unsigned int itals: 1;
};
*/

struct box_props
{
  bool opaque: 1;
  unsigned int fill_color: 3;
  unsigned int: 4;   //可有可无, 不影响编译;
  bool show_border: 1;
  unsigned int border_color: 3;
  unsigned int border_style: 2;
  unsigned int: 2;   //同上;
};

void show_settings (const struct box_props * pb);

int main (void)
{
  struct box_props box = {
      true, YELLOW, true, GREEN, DASHED   //clion此处代码提示有误, 无名位字段不会被赋值;
  };

  printf ("Original box seetings: \n");
  show_settings (&box);

  box.opaque = false;
  box.fill_color = WHITE;
  box.border_color = MAGENTA;
  box.border_style = SOLID;
  printf ("\nModified box settings: \n");
  show_settings (&box);

  return 0;
}

void show_settings (const struct box_props * pb)
{
  printf ("Box is %s. \n", pb -> opaque ? "opaque" : "transparent");
  printf ("The fill color is %s. \n", colors[pb -> fill_color]);
  printf ("Border %s. \n", (pb -> show_border == true) ? "shown" : "not shown");
  printf ("The border color is %s. \n", colors[pb -> border_color]);
  printf ("The border style is ");
  switch (pb -> border_style)
  {
    case SOLID:
      printf ("solid. \n");
      break;
    case DOTTED:
      printf ("dotted. \n");
      break;
    case DASHED:
      printf ("dashed. \n");
      break;
    default:
      printf ("unknown type. \n");
      break;
  }
}
