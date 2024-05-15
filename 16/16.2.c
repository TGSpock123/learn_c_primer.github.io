//预处理器指令从 '#' 开始, 长度为1逻辑行;
//格式为 "#预处理器指令 宏 替换体";

#include <stdio.h>

#define TWO 2   //可以注释;
#define OW "Consistency is the last refuge of the unimagina\
tive.   - Oscar Wi\
lde"   //反斜杠可以把define延伸一行;
#define FOUR TWO * TWO
#define PX printf ("X is %d. \n", x);
#define FMT "X is %d. \n"

int main (void)
{
  int x = TWO;

  PX;
  x = FOUR;
  printf (FMT, x);
  printf ("%s\n", OW);
  printf ("TWO: OW\n");
  printf ("%d: %s\n", TWO, OW);

  return 0;
}
