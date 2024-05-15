#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define EVEN_GT(X, Y) ((X) % 2 == 0 ? (((X) > (Y)) ? 1 : 0): 0)
#define PLUS(X, Y) printf (#X" is %d and "#Y" is %d. \n", X, Y)
#define I 25
#define SPACE ' '
#define PS() putchar (SPACE)
#define BIG(X) ((X) += 3)
#define SUMSQ(X, Y) (((X) * (X)) + ((Y) * (Y)))
#define PRT_INT(X) printf ("var name: "#X", var value: %d, var address: %p. \n", X, &X)
#define PRT_DATE(X) printf ("Now is %s. \n", X)
#define IF_BOOL(X) _Generic ((X), _Bool: 1, default: 0)

int comp (const void * j, const void * p);
