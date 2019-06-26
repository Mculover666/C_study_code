/**
* @ brief       测试float.h中的常量
* @ author      mculover666
* @ date        2019年6月26日13:13:27
* @ encoding    GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void)
{
    
    printf("FLT_DIG = %d FLT_MANT_DIG = %d\n", FLT_DIG, FLT_MANT_DIG);
    printf("FLT_MIN =%g FLT_MAX =%g\n", FLT_MIN, FLT_MAX);

    printf("DBL_DIG = %d DBL_MANT_DIG = %d\n", DBL_DIG, DBL_MANT_DIG);
    printf("DBL_MIN =%g DBL_MAX =%g\n", DBL_MIN, DBL_MAX);

    system("pause");
    return 0;
}
/*
    在Mingw-w64编译后运行结果：
    ------------------------------------
    FLT_DIG = 6 FLT_MANT_DIG = 24
    FLT_MIN =1.17549e-038 FLT_MAX =3.40282e+038
    DBL_DIG = 15 DBL_MANT_DIG = 53
    DBL_MIN =2.22507e-308 DBL_MAX =1.79769e+308
    请按任意键继续. . .
    ------------------------------------
*/