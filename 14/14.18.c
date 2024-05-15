//函数指针使用方式;

#include <stdio.h>
#define ASD struct c \
{                    \
  int a;             \
  int b;             \
}
#define STRING1 char *

typedef int arr5[5];
typedef arr5 * p_arr5;
typedef p_arr5 arrp10[10];

typedef char (* FRPTC (void)) [5];
typedef unsigned char BYTE;
typedef char * STRING;
typedef struct complex
{
  float real;
  float imag;
}COMPLEX;


int main (void)
{
  ASD s;
  struct c asd;
  BYTE x, y[10], * z;
  STRING name, sign;  //等价于 char * name, * sign;
  STRING1 name1, sign1;   //等价于 char * name, sign; 注意只有name是指针;
  COMPLEX com = {
      3.0, 6.0
  };
  int board[8][8];
  int ** ptrr;
  int * risks[10];   //一个10元素数组, 每个元素为一个(指向int元素的指针);
  int (* rusks)[10];  //一个指向包含10个(int元素)的数组的指针;
  int * oof[3][4];   //一个3 * 4元素数组, 每个元素为一个(指向int元素的指针);
  int (* uuf)[3][4];   //一个指向包含3 * 4个(int元素)的数组的指针;
  int (* uof[3])[4];   //一个3元素数组, 每个元素为一个(指向包含4个(int元素)的数组)的指针;
  char fup (int k);
  char * fump (int k);   //返回(char指针)的函数;
  char (* frump) (int k);   //指向(返回类型为char的函数)的指针;
  char (* flump[3]) (int k);   //一个3元素数组, 每个元素为一个指向(返回类型为char的函数)的指针;
  frump = &fup;
  for (int n = 0; n < 3; flump[n] = frump, n ++);

  s.b = 1;
  asd.a = 2;
  printf ("%s \n", fump (0));

  arr5 togs;   //含有5个(int元素)的数组;
  p_arr5 p2;   //一个指向(含有5个(int元素)的数组)的指针;
  arrp10 ap;   //一个内含10个(指向(含有5个(int元素)的数组)的指针)的数组;

  int (* pf)(const char *, ...);   //一个指向函数的指针;
  pf = printf;   //指的是printf;

  (*pf)("HELLO PRINTF! \n");   //调用;
  pf ("HELLO PRINTF! \n");   //第二种调用;

  function1 (sqrt);   //传递地址;
  function2 (sqrt (4.0));   //传递返回值;

  return 0;
}
char * fump (int k)
{
  if (k)
  {
    return ("sdcs");
  }else
  {
    return ("etwt");
  }
}
char fup (int k)
{
  return 'm';
}