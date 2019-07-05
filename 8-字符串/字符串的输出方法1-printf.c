/**
 * @ brief      字符串的输出方法1-printf
 * @ author     mculover666
 * @ date       2019年7月5日15:29:29
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

#define MSG1    "mculover666"
#define MSG2    "hello,world"

int main(void)
{
    printf("%s %s\n",  MSG1, MSG2);
    
    system("pause");
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    mculover666 hello,world
    请按任意键继续. . .
    ------------------------------------
 */