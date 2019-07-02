/**
 * @ brief      二维数组每个元素的地址
 * @ author     mculover666
 * @ date       2019年7月2日12:59:37
 * @ encoding   GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int i,j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4;j++)
        {
            printf("%#X ",&a[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    0X61FDE0 0X61FDE4 0X61FDE8 0X61FDEC
    0X61FDF0 0X61FDF4 0X61FDF8 0X61FDFC
    0X61FE00 0X61FE04 0X61FE08 0X61FE0C
    请按任意键继续. . .
    ------------------------------------
 */