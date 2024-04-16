#include <stdio.h>

struct rect
{
  double x;
  double y;
};

double rect_area (struct rect r);
double rect_area1 (struct rect * rp);

int main (void)
{
  double area;

  area = rect_area ((struct rect){3, 4});
  printf ("%.2f\n", area);

  area = rect_area1 (&(struct rect){5, 6});
  printf ("%.2f\n", area);

  return 0;
}

double rect_area (struct rect r)
{
  return r.x * r.y;
}

double rect_area1 (struct rect * rp)
{
  return (rp -> x) * (rp -> y);
}