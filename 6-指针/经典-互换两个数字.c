/**
 * @ brief      经典指针程序——互换两个数字
 * @ author     mculover666
 * @ date       2019年7月2日10:32:32
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int swap1(int a, int b);
int swap2(int* a, int* b);
int swap3(int* a, int* b);

int main(void)
{
    int a = 10, b = 20;

    printf("交换前: a = %d, b = %d\n", a, b);
    swap1(a, b);
    printf("交换后: a = %d, b = %d\n", a, b);

    printf("交换前: a = %d, b = %d\n", a, b);
    swap2(&a, &b);
    printf("交换后: a = %d, b = %d\n", a, b);

    printf("交换前: a = %d, b = %d\n", a, b);
    swap3(&a, &b);
    printf("交换后: a = %d, b = %d\n", a, b);

    system("pause");
    return 0;
}
/**
 * @ note   无效，不能将主函数的两个数字互换
 */
int swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    return 0;
}
/**
 * @ note   无效，交换了a变量和b变量的地址，值没有变
 */
int swap2(int* a, int* b)
{
    int* temp = a;
    a = b;
    b = temp;
    return 0;
}
/**
 * @ note   有效，交换了主函数中a变量和b变量的值
 */
int swap3(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    交换前: a = 10, b = 20
    交换后: a = 10, b = 20
    交换前: a = 10, b = 20
    交换后: a = 10, b = 20
    交换前: a = 10, b = 20
    交换后: a = 20, b = 10
    请按任意键继续. . .
    ------------------------------------
 */