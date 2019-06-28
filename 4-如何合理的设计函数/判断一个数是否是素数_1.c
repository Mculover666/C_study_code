/**
* @ brief       判断一个数是否是素数
* @ author      mculover666
* @ date        2019年6月28日14:46:13
* @ encoding    GBK/GB2312
* @ note        质数（素数）定义为在大于1的自然数中，除了1和它本身以外不再有其他因数。
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 0;
    int i;

    printf("请输入一个整数:");
    scanf("%d", &num);

    for(i = 2;i < num;i++)
    {
        if(num % i == 0)
            break;
    }
    if(i == num)
        printf("%d 是素数.\n", num);
    else
        printf("%d 不是素数.\n", num);
    
    system("pause");
    return 0;
}
/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    请输入一个整数:13
    13 是素数.
    请按任意键继续. . .
    ------------------------------------
*/