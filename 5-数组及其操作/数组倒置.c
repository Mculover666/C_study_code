/**
* @ brief       数组的倒置
* @ author      mculover666
* @ date        2019年6月28日17:20:37
* @ encoding    GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

#define A_SIZE 5 

int reverse(int* a, int size);

int main(void)
{
    int a[A_SIZE] = {1,2,3,4,5};
    int i;

    reverse(a, A_SIZE);

    for(i = 0;i < A_SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}

/**
 * @ brief  倒置数组
 * @ param  int* - 数组的地址
 *          size - 数组的大小
 * @ retval 0 - ok
 */
int reverse(int* a, int size)
{
    int i = 0,j = size - 1;
    int t = 0;

    while(i < j)
    {
        t = a[i];
        a[i++] = a[j];
        a[j--] = t;
    }

    return 0;
}
/*
    在Mingw-w64编译后运行结果：
    测试结果1：
    ------------------------------------
    6 5 4 3 2 1
    请按任意键继续. . .
    ------------------------------------
    测试结果2：
    ------------------------------------
    5 4 3 2 1
    请按任意键继续. . .
    ------------------------------------   
*/