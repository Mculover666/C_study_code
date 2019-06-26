/**
* @ brief      测试整数输出控制修饰符的使用
* @ author     mculover666
* @ date       2019年6月25日15:22:51
* @ encoding   GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 160;

    printf("i = %d\n", i);
    printf("i = %8d\n", i);
    printf("i = %-8d\n", i);

    system("pause");
    return 0;
}

/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    i = 160
    i =      160
    i = 160
    请按任意键继续. . .
    ------------------------------------
*/
