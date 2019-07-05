/**
 * @ brief      测试putchar
 * @ author     mculover666
 * @ date       2019年7月5日16:08:17
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch = 'A';
    int ret = 0;

    ret = putchar(ch);
    printf("ret = %d (char)ret = %c", ret, ret);

    system("pause");
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    Aret = 65 (char)ret = A请按任意键继续. . .
    ------------------------------------
 */