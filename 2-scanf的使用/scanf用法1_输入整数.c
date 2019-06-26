/**
 * @ brief      测试scanf输入整数
 * @ author     mculover666
 * @ date       2019年6月25日10:47:30
 * @ encoding   GBK/GB2312
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;

    printf("请输入i的值(整数):");
    scanf("%d", &i);
    printf("i = %d\n", i);

    system("pause");
    return 0;
}
/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    请输入i的值(整数):100
    i = 100
    请按任意键继续. . .
    ------------------------------------
 */
