/**
 * @ brief      字符串的输入方法2-gets
 * @ author     mculover666
 * @ date       2019年7月5日11:02:33
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[40];
    char* ptr = NULL;

    printf("请输入你的名字:\n");
    ptr = gets(name);
    printf("你的名字是:name = %s *ptr = %s\n", name, ptr);
    
    system("pause");
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    请输入你的名字:
       mculover666
    你的名字是:name =   mculover666 *ptr =   mculover666
    请按任意键继续. . .
    ------------------------------------
 */