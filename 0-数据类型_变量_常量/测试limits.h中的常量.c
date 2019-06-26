/**
* @ brief       测试limits.h中的常量
* @ author      mculover666
* @ date        2019年6月26日12:45:32
* @ encoding    GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    
    printf("%d %d %d %d\n", CHAR_BIT, CHAR_MIN, CHAR_MAX, UCHAR_MAX);
    printf("%d %d %d\n", SHRT_MIN, SHRT_MAX, USHRT_MAX);

    printf("%d %d %u\n", INT_MIN, INT_MAX, UINT_MAX);
    printf("%ld %ld %lu\n", LONG_MIN, LONG_MAX, ULONG_MAX);

    system("pause");
    return 0;
}
/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    8 -128 127 255
    -32768 32767 65535
    -2147483648 2147483647 4294967295
    -2147483648 2147483647 4294967295
    请按任意键继续. . .
    ------------------------------------
*/