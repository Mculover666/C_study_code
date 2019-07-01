/**
 * @ brief      测试各类型指针占用字节数
 * @ author     mculover666
 * @ date       2019年7月1日09:45:19
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* p1 = NULL;
    int*  p2 = NULL;
    long* p3 = NULL;

    float*  q1 = NULL;
    double* q2 = NULL;

    printf("p1:%d p2:%d p3:%d\n", sizeof(p1), sizeof(p2), sizeof(p3));
    printf("q1:%d q2:%d\n", sizeof(q1), sizeof(q2));
    
    system("pause");
    return 0;
}
/**
    在Mingw-w64编译，64位win10运行结果：
    ------------------------------------
    p1:8 p2:8 p3:8
    q1:8 q2:8
    请按任意键继续. . .
    ------------------------------------
    在Gcc编译，64位Ubuntu运行结果：
    ------------------------------------
    p1:8 p2:8 p3:8
    q1:8 q2:8
    ------------------------------------
 */