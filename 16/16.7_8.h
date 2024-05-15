#ifndef _16_7_8_H_
#define _16_7_8_H_

#include "../s_gets1.h"

#define SLEN 32

struct names_st
{
  char first[SLEN];
  char last[SLEN];
};

typedef struct names_st names;

void get_names (names *);
void show_names (const names *);

#endif
