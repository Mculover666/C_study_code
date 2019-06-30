/**
 * @ brief      基本类型指针的使用
 * @ author     mculover666
 * @ date       2019年6月30日16:30:04
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 88;
    int j = 0;

    int*p;  //创建一个指针变量p，用于保存int类型变量i的值
    
    p = &i; //将i的地址赋给指针变量p，使p指向i

    j = *p; //*p表示的是以p的内容为地址的变量，等价于j = i;

    printf("i = %d  j = %d\n", i ,j);
    printf("p = %p  &i = %#X\n", p, &i);
    
    system("pause");
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    i = 88  j = 88
    p = 000000000061FE0C  &i = 0X61FE0C
    请按任意键继续. . .    
    ------------------------------------
 */