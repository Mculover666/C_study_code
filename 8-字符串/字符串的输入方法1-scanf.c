/**
 * @ brief      字符串的输入方法1-scanf
 * @ author     mculover666
 * @ date       2019年7月5日10:55:40
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[40];

    printf("请输入你的名字:\n");
    scanf("%s", name);
    printf("你的名字是:%s\n", name);
    
    system("pause");
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    请输入你的名字:


        mculover666
    你的名字是:mculover666
    请按任意键继续. . .
    ------------------------------------
 */