/**
* @ brief       测试C语言的真假值测试
* @ author      mculover666
* @ date        2019年6月27日09:44:17
* @ encoding    GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = -3;

    do
    {
        if(i)
        {
            printf("%d is true\n", i);
        }
        else
        {
            printf("%d is false\n", i);
        }
    }while(++i <= 3);

    system("pause");
    return 0;
}
/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    -3 is true
    -2 is true
    -1 is true
    0 is false
    1 is true
    2 is true
    3 is true
    请按任意键继续. . .
    ------------------------------------
*/