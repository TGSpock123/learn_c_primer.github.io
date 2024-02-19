#include <stdio.h>
//一个写代码让人看不懂的小技巧.
int main (void)
{
    int x = 30;  //原始 x, 函数内通用, 不会被块内的 x 更改值.

    printf ("x in outer block: %d at %p\n", x, &x);
    {
        int x = 77; //定义在块内, 离开块时被销毁.
        printf ("x in inner block: %d at %p\n", x, &x);
    }
    printf ("x in outer block: %d at %p\n", x, &x);
    while (x ++ < 33)
    {
        int x = 100;  //定义在 while 块内.
        x ++;
        printf ("x in while loop: %d at %p\n", x, &x);
    }
    //每次离开循环时, while 中的 x 被销毁, 进入时被重新定义.
    printf ("x in outer block: %d at %p\n", x, &x);

    return 0;
}