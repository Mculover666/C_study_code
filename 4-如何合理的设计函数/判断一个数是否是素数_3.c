/**
* @ brief       输出一个范围内所有的素数
* @ author      mculover666
* @ date        2019年6月28日15:04:45
* @ encoding    GBK/GB2312
* @ note        质数（素数）定义为在大于1的自然数中，除了1和它本身以外不再有其他因数。
*/
#include <stdio.h>
#include <stdlib.h>

/**
 * @ breif  判断一个数是否是素数
 * @ param  int
 * @ retval int: 0-ok -1-fail
 */
int is_prime(int num)
{
    int i;

    for(i = 2;i < num;i++)
    {
        if(num % i == 0)
            break;
    }
    if(i == num)
        return 0;
    else
        return -1;
}

int main(void)
{
    int num = 0;
    int i;
    int count = 0;

    printf("请输入一个大于1的整数:");
    scanf("%d", &num);


    for(i = 2;i <= num; i++)
    {
        if(0 == is_prime(i))
        {
            printf("%4d ", i);
            count++;
            if(count == 8)
            {
                printf("\n");
                count = 0;
            }
        }
    }
    printf("\n");

    system("pause");
    return 0;
}
/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    请输入一个大于1的整数:200
    2    3    5    7   11   13   17   19
    23   29   31   37   41   43   47   53
    59   61   67   71   73   79   83   89
    97  101  103  107  109  113  127  131
    137  139  149  151  157  163  167  173
    179  181  191  193  197  199
    请按任意键继续. . .
    ------------------------------------
*/