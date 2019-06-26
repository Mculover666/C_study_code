/**
* @ brief      测试长字符串输出的三种方式
* @ author     mculover666
* @ date       2019年6月25日16:39:34
* @ encoding   GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Hello,my name is mculover666.\n");
    printf("Hello,\
My name is mculover666.\n") ;   
    printf("Hello,"
        "My name is mculover666.\n");
    
    system("pause");
    return 0;
}
/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    Hello,my name is mculover666.
    Hello,My name is mculover666.
    Hello,My name is mculover666.
    请按任意键继续. . .  
    ------------------------------------
*/