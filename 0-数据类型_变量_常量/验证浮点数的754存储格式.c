/**
 * @ brief      验证浮点数在计算机中存储的IEEE 754标准
 * @ author     mculover666
 * @ date       2019年6月23日14:49:35
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float i = 5.625;    //0100 0000 1011 0100 0000 0000 0000 0000 
    int *p = &i;

    printf("i = %f\n", i);
    printf("i = %x\n", *p);

    system("pause");
    return 0;
}
/**
 * 在Mingw-w64编译器下运行结果：
 * ---------------------------------------
    i = 5.625000
    i = 40b40000
 * ---------------------------------------
 */