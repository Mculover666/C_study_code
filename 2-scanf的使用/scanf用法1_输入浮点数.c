/**
* @ brief      测试scanf输入浮点数
* @ author     mculover666
* @ date       2019年6月25日10:47:11
* @ encoding   GBK/GB2312
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float i = 0.0;

    printf("请输入i的值(浮点数):");
    scanf("%f", &i);
    printf("i = %f\n", i);

    system("pause");
    return 0;
}

/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    请输入i的值(浮点数):1.23456789
    i = 1.234568
    请按任意键继续. . .
    ------------------------------------
*/

