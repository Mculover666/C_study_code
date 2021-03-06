/**
* @ brief      测试scanf输入中含有非输入控制符
* @ author     mculover666
* @ date       2019年6月25日10:55:17
* @ encoding   GBK/GB2312
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;

    printf("请输入m + i的值(整数):");
    scanf("m%d", &i);
    printf("i = %d\n", i);

    system("pause");
    return 0;
}

/*
    在Mingw-w64编译后运行结果：
    测试结果1：
    ------------------------------------
    请输入m + i的值(整数):123
    i = 0
    请按任意键继续. . .
    ------------------------------------

    测试结果2：
    ------------------------------------
    请输入m + i的值(整数):m123
    i = 123
    请按任意键继续. . .
    ------------------------------------

    测试结果3：
    ------------------------------------
    请输入m + i的值(整数):m123n
    i = 123
    请按任意键继续. . .
    ------------------------------------
*/