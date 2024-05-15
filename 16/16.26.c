#include <stdio.h>
#include <math.h>

#define ANG_TO_RAD(X) ((X) * M_PI / 180)

struct ps_point
{
  double LENG;
  double ANGL;
  double RAD;
};

struct ccs_point
{
  double x;
  double y;
};


#define PS_2_CCS(X) ({                 \
  struct ccs_point point_cov;          \
  point_cov.x = X.LENG * cos (X.RAD); \
  point_cov.y = X.LENG * sin (X.RAD); \
  point_cov;                           \
})

int main (void)
{
  struct ps_point point_inps;
  struct ccs_point point_inccs;

  printf ("Please enter length and angle of the point: \n");
  scanf ("%lf%lf", &point_inps.LENG, &point_inps.ANGL);
  point_inps.RAD = ANG_TO_RAD(point_inps.ANGL);
  point_inccs = PS_2_CCS (point_inps);
  printf ("The point x: %lf, y: %lf. \n", point_inccs.x, point_inccs.y);

  return 0;
}
