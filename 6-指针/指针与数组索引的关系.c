/**
 * @ brief      测试指针与数组索引的关系
 * @ author     mculover666
 * @ date       2019年7月1日15:03:46
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[5] = {1,2,3,4,5};
    int i;
    int* p = a;

    //打印每个元素的地址
    for(i = 0;i < 5;i++)
    {
        printf("a[%d] = %#X\n",i, &a[i]);
    }

    //使用指针索引每个元素
    for(i = 0;i < 5;i++)
    {
        printf("(p+%d) = %#X    *(p+%d) = %d\n",i, (p+i), i, *(p+i));
    }

    system("pause");
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    a[0] = 0X61FDF0
    a[1] = 0X61FDF4
    a[2] = 0X61FDF8
    a[3] = 0X61FDFC
    a[4] = 0X61FE00
    (p+0) = 0X61FDF0    *(p+0) = 1
    (p+1) = 0X61FDF4    *(p+1) = 2
    (p+2) = 0X61FDF8    *(p+2) = 3
    (p+3) = 0X61FDFC    *(p+3) = 4
    (p+4) = 0X61FE00    *(p+4) = 5
    请按任意键继续. . .
    ------------------------------------
 */