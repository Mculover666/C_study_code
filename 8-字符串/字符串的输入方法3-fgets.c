/**
 * @ brief      字符串的输入方法3-gets
 * @ author     mculover666
 * @ date       2019年7月5日11:26:48
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

#define LEN 40
int main(void)
{
    char name[LEN];
    char* ptr = NULL;

    printf("请输入你的名字:\n");
    ptr = fgets(name, LEN, stdin);
    printf("你的名字是: name = %s, *ptr = %s\n", name, ptr);

    system("pause");
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    请输入你的名字:
    mculover666
    你的名字是: name = mculover666
    , *ptr = mculover666

    请按任意键继续. . .
    ------------------------------------
 */