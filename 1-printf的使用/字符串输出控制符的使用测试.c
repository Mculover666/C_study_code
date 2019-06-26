/**
* @ brief      测试字符串输出控制修饰符的使用
* @ author     mculover666
* @ date       2019年6月25日16:10:47
* @ encoding   GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

#define STR "mculover666"

int main(void)
{
    printf("*%s*\n", STR);
    printf("*%15s*\n", STR);
    printf("*%-15s*\n", STR);
    printf("*%15.6s*\n", STR);
    printf("*%-15.6s*\n", STR);
    
    system("pause");
    return 0;
}
/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    *mculover666*
    *    mculover666*
    *mculover666    *
    *         mculov*
    *mculov         *
    请按任意键继续. . .
    ------------------------------------
*/