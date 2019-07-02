/**
 * @ brief      多级指针测试程序
 * @ author     mculover666
 * @ date       2019年7月2日09:57:54
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 10;
    int* p = &i;    //指针变量p存放int类型变量的地址
    int** q = &p;   //指针变量q存放int*类型变量的地址
    int*** r = &q;  //指针变量r存放int**类型变量的地址

    printf("***r = %d\n", ***r);    //*ptr表示以ptr的内容为地址的变量
    
    system("pause");
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    ***r = 10
    请按任意键继续. . .
    ------------------------------------
 */