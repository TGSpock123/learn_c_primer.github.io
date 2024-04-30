#include <stdio.h>

//这个结构有点好玩, 可录入的值为定义的几个值之一, 并且每录入一个新值就会洗掉先前录入的值;
union hold
{
  int digit;
  double bigfl;
  char letter;
};

int main (void)
{
  union hold save[10];   //一个内含十个hold类型的数组;
  union hold * pu;   //一个指向hold类型的指针;
  union hold valA;   //一个hold类型的union变量;
  int x;

  valA.letter = 'A';
  union hold valB = valA;   //使用另一个联合初始化联合;
  union hold valC = {88};   //初始化联合中的某个成员;
  union hold valD = {.bigfl = 118.2};   //指定初始化器;

  valA.digit = 23;   //把23存储在valA, 占用2字节;
  valA.bigfl = 2.0;   //清除23并把2.0存储在valA, 占用8字节;
  valA.letter = 'h';   //清除2.0并把'h'存储在valA, 占用1字节;

  pu = &valA;
  x = pu -> digit;   //相当于x = valA.digit;

  /*
  x = (pu -> letter) * 3.02   这种写法是错误的;
  */

  //以下是一段车辆管理代码;
  struct owner   //车主信息;
  {
    char socsecurity[12];
    //代码;
  };
  struct leasecompany   //租赁者信息;
  {
    char name[40];
    char headquarters[40];
    //代码;
  };

  union data   //存储信息的联合;
  {
    struct owner owncar;
    struct leasecompany leasecar;
  };

  struct car_data
  {
    char make[15];
    int status;   //status为判断值, 当status为0时写车主信息入*结构变量名*.ownerinfo.owncar.socsecurity,
                  //当status为1时则写租赁者信息;
    union data ownerinfo;
    //代码;
  };

  //用匿名联合重写以上代码;
  struct owner1   //车主信息;
  {
    char socsecurity[12];
    //代码;
  };
  struct leasecompany1   //租赁者信息;
  {
    char name[40];
    char headquarters[40];
    //代码;
  };
  struct car_data1
  {
    char make[15];
    int status;   //status为判断值, 当status为0时写车主信息入*结构变量名*.owncar.socsecurity,
                  //当status为1时则写租赁者信息;
    union
    {
      struct owner1 owncar;
      struct leasecompany1 leasecar;
    };
    //代码;
  };

  return 0;
}