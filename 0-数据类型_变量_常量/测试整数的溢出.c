/**
* @ brief       测试整数的溢出
* @ author      mculover666
* @ date        2019年6月26日14:42:59
* @ encoding    GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    int i = INT_MAX;
    unsigned int j = UINT_MAX;

    printf("%d %d %d\n", i, i+1, i+2);
    printf("%u %u %u\n", j, j+1, j+2);

    system("pause");
    return 0;
}
/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    2147483647 -2147483648 -2147483647
    4294967295 0 1
    请按任意键继续. . .
    ------------------------------------
*/