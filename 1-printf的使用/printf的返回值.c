/**
* @ brief      测试printf()函数的返回值
* @ author     mculover666
* @ date
* @ encoding   GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 232;
    int count = 0;

    count = printf("%d\n", i);
    printf("一共打印了%d个字符.\n", count);

    system("pause");
    return 0;
}
/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    232
    一共打印了4个字符.
    请按任意键继续. . .
    ------------------------------------
*/