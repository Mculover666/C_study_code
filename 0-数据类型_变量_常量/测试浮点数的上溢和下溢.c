/**
* @ brief       测试浮点数的上溢和下溢
* @ author      mculover666
* @ date        2019年6月26日14:57:50
* @ encoding    GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void)
{
    float i = FLT_MAX * 100;
    float j = FLT_MIN / 100;

    //测试浮点数上溢
    printf("FLT_MAX = %e  FLT_MAX * 100 = %e\n",FLT_MAX, i);

    //浮点数下溢(测试失败)
    printf("FLT_MIN = %e  FLT_MIN / 100 = %e\n",FLT_MIN, j);

    system("pause");
    return 0;
}
/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    FLT_MAX = 3.402823e+038  FLT_MAX * 100 = 1.#INF00e+000
    FLT_MIN = 1.175494e-038  FLT_MIN / 100 = 1.175493e-040
    请按任意键继续. . .
    ------------------------------------
*/