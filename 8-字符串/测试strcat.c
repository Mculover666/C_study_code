/**
 * @ brief      测试使用strcat进行字符串的拼接
 * @ author     mculover666
 * @ date       2019年7月5日20:47:05
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* strncat(char* dest, const char* src, size_t count);

int main(void)
{
    char name[40] = "mculover666";
    char say[20]  = "Hello,world";

    printf("拼接前:\n");
    printf("name = %s say = %s\n", name, say);

    strcat(name, say);
    printf("拼接后:\n");
    printf("name = %s say = %s\n", name, say);
    
    system("pause");
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    拼接前:
    name = mculover666 say = Hello,world
    拼接后:
    name = mculover666Hello,world say = Hello,world
    请按任意键继续. . .
    ------------------------------------
 */