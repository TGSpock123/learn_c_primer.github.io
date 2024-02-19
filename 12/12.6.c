#include <stdio.h>
//示例1:
int hocus;
int magic ();
int main (void)
{
    extern int hocus;
    ...
}
int magic ()
{
    extern int hocus;
    ...
}
//上文中一共出现了一个hocus, 后面两次声明起强调作用, 可以省略.
//示例2:
int hocus;
int magic (void);
int main (void)
{
    extern int hocus;
    ...
}
int magic (void)
{
    //未声明变量
    ...
}
//示例2中出现两个hocus, 第一个是文件头部的全局hocus变量, 第二个是main函数里的局部hocus变量.
//全局hocus变量对main函数不可见, 因为被局部hocus变量挡住了.
//虽然magic函数没有声明hocus变量, 它可以调用头部的全局hocus变量.
//示例3:
int hocus;
int magic (void);
int main (void)
{
    int hocus;//默认被声明为自动变量.
    ...
}
int pocus;//因为它被声明在了main函数后面, 所以它虽然全局存在但对main函数不可见.
int magic (void)
{
    auto int hocus;//现实声明为自动变量, 效果和上面差不多.
    ...
}
//示例3中一共出现四个变量, 全局变量hocus, main函数中局部变量hocus,
//magic函数中局部变量hocus和对main函数不可见的全局变量pocus.
//全局变量对main函数和magic函数均不可见.