#include <stdio.h>
//以下两种声明等价, 第二种在访问上更迅捷;
struct names
{
  char first[20];
  char last[20];
};
struct person
{
  int id;
  char first[20];    //没有问题, 因为两个同名first数组访问方式不同, 分别为person.first和person.name.first;
  struct names name;
};

struct person1
{
  int id;
  //char first[20];    //不能这样操作, 因为匿名struct中first数组的访问方式为person.first;
  struct
  {
    char first[20];
    char last[20];
  };
};

int main (void)
{
  //代码;

  return 0;
}
