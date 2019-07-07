/**
 * @ brief      测试strlen函数
 * @ author     mculover666
 * @ date       2019年7月5日20:37:52
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char name[40] = "mculover666";

    printf("sizeof(name) = %d\n", sizeof(name));
    printf("strlen(name) = %d\n", strlen(name));
    
    system("pause");
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    sizeof(name) = 40
    strlen(name) = 11
    请按任意键继续. . .
    ------------------------------------
 */