//�ɸ���С����洢������˫���ȸ�������ʮ����С��ת������. 
#include "myPow.h"   //���һ��ʲô���ݵ�; 
#include "s_gets.h"  //���һ��ʲô�����ַ�����; 
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

  //ת��С����Ϊ�����; 
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
    //ת���ַ�Ϊʮ������;
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
    //ת��Ϊ�����Ʋ��洢; 
    for (int j = 0; j <= 3; j ++)
    {
      bin[4 * p + 3 - j] = f_hex % 2;
      f_hex /= 2;
    }
	}

  //����ָ������; 
  for (int j = 11, p = 0; j > 0; j --, p ++)
  {
    if (bin[j] == 1)
    {
      ind += myPow(2, p);
    }
  }
  ind -= 1023;   //1023Ϊƫ�ó���; 

  //�����������; 
  for (int j = 12, p = -1; j < 64; j ++, p --)
  {
    if (bin[j] == 1)
    {
      ret += myPow(2, p);   //����+1; 
    }
  }

  //��ϵó�С��; 
  ret *= myPow(2, ind);
  ret = (bin[0] == 0) ? ret : -ret;   //�ж�����; 

  //��������ڷ�main��������return ret; 
  printf("The number is: %lf. \n", ret);

  return 0;
}
