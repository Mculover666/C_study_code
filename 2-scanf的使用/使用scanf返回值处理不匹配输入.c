/**
* @ brief       使用scanf的返回值来处理不匹配的输入
* @ author      mculover666
* @ date        2019年6月27日09:00:26
* @ encoding    GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    
    do
    {
        printf("请输入一个整数(输入q结束)：");
    }while(scanf("%d", &i));

    system("pause");
    return 0;
}
/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    请输入一个整数(输入q结束)：1
    请输入一个整数(输入q结束)：12
    请输入一个整数(输入q结束)：123
    请输入一个整数(输入q结束)：1234
    请输入一个整数(输入q结束)：q
    请按任意键继续. . .
    ------------------------------------
*/