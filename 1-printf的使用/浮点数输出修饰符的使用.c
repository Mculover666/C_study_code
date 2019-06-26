/**
* @ brief      测试浮点数输出修饰符的使用
* @ author     mculover666
* @ date       2019年6月25日15:40:54
* @ encoding   GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float i = 3852.99;

    printf("*%f*\n", i);
    printf("*%e*\n", i);
    printf("*%4.2f*\n", i);
    printf("*%3.1f*\n", i);
    printf("*%10.3f*\n", i);
    printf("*%10.3e*\n", i);
    printf("*%+4.2f*\n", i);
    printf("*%010.2f*\n", i);

    system("pause");
    return 0;
}
/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    *3852.989990*
    *3.852990e+003*
    *3852.99*
    *3853.0*
    *  3852.990*
    *3.853e+003*
    *+3852.99*
    *0003852.99*
    请按任意键继续. . .
    ------------------------------------
*/