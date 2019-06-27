/**
* @ brief       测试scanf的返回值
* @ author      mculover666
* @ date        2019年6月27日08:49:15
* @ encoding    GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i1 = 0, i2 = 0, i3 = 0;
    int result = 0;

    printf("请输入3个整数：");
    result = scanf("%d %d %d", &i1, &i2, &i3);

    printf("i1 = %d i2 = %d i3 = %d\n", i1, i2, i3);
    printf("result = %d\n", result);

    system("pause");
    return 0;
}
/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    请输入3个整数：12 154 23
    i1 = 12 i2 = 154 i3 = 23
    result = 3
    请按任意键继续. . .
    ------------------------------------
*/