/**
* @ brief      测试基本输出控制符的使用
* @ author     mculover666
* @ date       2019年6月25日14:45:26
* @ encoding   GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 160;
    float j = 1.23;
    float k = 1.23e-3;
    double h = 1.23e-6;
    int *p = &i;

    printf("%%d: i = %d %%o:i = %o %%x:i = %x %%X:i = %X %%#x:i = %#x %%#X:i = %#X\n", i, i, i, i, i, i);
    printf("%%f: j = %f %%g:j = %g\n", j, j);
    printf("%%e:j = %e %%g:j = %g\n", k, k);
    printf("%%g:h = %g\n", h);

    printf("%%p: p = %p\n", p);

    system("pause");
    return 0;
}

/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    %d: i = 160 %o:i = 240 %x:i = a0 %X:i = A0 %#x:i = 0xa0 %#X:i = 0XA0
    %f: j = 1.230000 %g:j = 1.23
    %e:j = 1.230000e-003 %g:j = 0.00123
    %g:h = 1.23e-006
    %p: p = 000000000022FE34
    请按任意键继续. . .
    ------------------------------------
*/
