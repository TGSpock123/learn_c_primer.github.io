//可复用小端序存储二进制双精度浮点数对十进制小数转换程序. 
#include "myPow.h"   //随便一个什么算幂的; 
#include "s_gets.h"  //随便一个什么输入字符串的; 
int main (void)
{
	char hex[17];
	short bin[65];
	char temp;
  int f_hex;
  int ind = 0;
  double ret =1;

	printf ("Please enter the number: \n");
	s_gets (hex, 17);

  //转换小端序为大端序; 
  for (int i = 0; i <= 6; i += 2)
  {
    temp = hex[i];
    hex[i] = hex[14 - i];
    hex[14 - i] = temp;
    temp = hex[i + 1];
    hex[i + 1] = hex[15 - i];
    hex[15 - i] = temp;
  }

	for (int p = 0; p < 16; p ++)
	{
    //转换字符为十进制数;
    if ((int)hex[p] >= 48 && (int)hex[p] <= 57)
    {
      f_hex = (int)hex[p] - 48;
    }
    else if ((int)hex[p] >= 65 && (int)hex[p] <= 70)
    {
      f_hex = (int)hex[p] - 55;
    }
    else
    {
      f_hex = (int)hex[p] - 87;
    }
    //转换为二进制并存储; 
    for (int j = 0; j <= 3; j ++)
    {
      bin[4 * p + 3 - j] = f_hex % 2;
      f_hex /= 2;
    }
	}

  //计算指数部分; 
  for (int j = 11, p = 0; j > 0; j --, p ++)
  {
    if (bin[j] == 1)
    {
      ind += myPow(2, p);
    }
  }
  ind -= 1023;   //1023为偏置常数; 

  //计算底数部分; 
  for (int j = 12, p = -1; j < 64; j ++, p --)
  {
    if (bin[j] == 1)
    {
      ret += myPow(2, p);   //底数+1; 
    }
  }

  //结合得出小数; 
  ret *= myPow(2, ind);
  ret = (bin[0] == 0) ? ret : -ret;   //判断正负; 

  //如果化用在非main函数中则return ret; 
  printf("The number is: %lf. \n", ret);

  return 0;
}
