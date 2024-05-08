#include <stdio.h>
#include <stdalign.h>

int main (void)
{
  double dx;
  char ca;
  char cx;
  double dz;
  char cb;
  char _Alignas (double) cz;
  char alignas (double) ch;

  printf ("char alignment: %zd\n", _Alignof (char));
  printf ("char alignment: %zd\n", _Alignof (double));
  printf ("double: &dx: %p\n", &dx);
  printf ("char: &ca: %p\n", &ca);
  printf ("char: &cx: %p\n", &cx);
  printf ("double: &dz: %p\n", &dz);
  printf ("char: &cb: %p\n", &cb);
  printf ("char _Alignas (double): &cz: %p\n", &cz);
  printf ("char alignas (double) &ch: %p\n", &ch);

  return 0;
}
