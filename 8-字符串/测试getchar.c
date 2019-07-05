/**
 * @ brief      测试getchar
 * @ author     mculover666
 * @ date       2019年7月5日16:08:17
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch = 0;

    printf("请输入一个字符:");
    ch = getchar();    
    printf("你输入的字符是:%c\n", ch);
    
    system("pause");
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    请输入一个字符:a
    你输入的字符是:a
    请按任意键继续. . .
    ------------------------------------
 */