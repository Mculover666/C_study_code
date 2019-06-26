/**
* @ brief      scanf解析机制测试
* @ author     mculover666
* @ date       2019年6月25日13:08:34
* @ encoding   GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    char ch;

    printf("请输入i的值(整数)：");
    scanf("%d", &i);

    printf("请输入ch的值(字符)");
    scanf("%c", &ch);

    printf("i = %d, ch = %c\n", i ,ch);

    system("pause");
    return 0;
}

/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    请输入i的值(整数)：123m
    请输入ch的值(字符)i = 123, ch = m
    请按任意键继续. . .
    ------------------------------------
*/