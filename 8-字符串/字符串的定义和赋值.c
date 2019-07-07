/**
 * @ brief      测试字符串的定义和赋值      
 * @ author     mculover666
 * @ date       2019年7月7日15:00:25
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*
        错误代码：
        char name[20];
        name = "mculover666";
     */
    char* name = NULL;
    name = "mculover666";
    printf("name = %s\n", name);
    
    system("pause");
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    name = mculover666
    请按任意键继续. . .
    ------------------------------------
 */