#include "../s_gets.h"
#define LEN 30

enum spectrum
{
  red, orange, yellow, green, blue, violet, purple
};

const char * colors[] = {
    "red", "orange", "yellow", "green", "blue", "violet", "purple"
};

int main (void)
{
  char choice[LEN];
  enum spectrum color;
  bool color_is_found = false;

  puts ("Enter a color (empty line to quit): ");

  while ((s_gets(choice, LEN)) && (choice[0]))
  {
    for (color = red; color <= purple; color ++)
    {
      if (!(strcmp (choice, colors[color])))
      {
        color_is_found = true;
        break;
      }
    }

    if (color_is_found)
    {
      switch (color)
      {
        case red:
          puts ("Rose are red. ");
          break;
        case orange:
          puts ("Poppies are orange. ");
          break;
        case yellow:
          puts ("Sunflowers are yellow. ");
          break;
        case green:
          puts ("Grass is green. ");
          break;
        case blue:
          puts ("Bluebells are blue. ");
          break;
        case violet:
          puts ("Violets are violet. ");
          break;
        case purple:
          puts ("Lavenders are purple. ");
          break;
      }
    }else
    {
      printf ("I don't know about %s. \n", choice);
    }

    color_is_found = false;
    puts ("Please enter Next color: ");
  }
  puts ("Thank you for using. ");

  return 0;
}