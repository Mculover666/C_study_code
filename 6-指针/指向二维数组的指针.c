/**
 * @ brief      指向二维数组的指针
 * @ author     mculover666
 * @ date       2019年7月2日14:37:53
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

    int (*ptrA)[4]; //ptrA指向一个包含4个int值的数组
    ptrA = a;
    
    printf("ptrA = %#X &ptrA[0] = %#X ptrA[0] = %#X &ptrA[0][0] = %#X\n",ptrA, &ptrA[0], ptrA[0], &ptrA[0][0]);

    //ptrA[0][0]
    printf("ptrA[0][0] = %d\n", ptrA[0][0]);
    printf("*(ptrA[0]) = %d\n", *(ptrA[0]));
    printf("**(ptrA) = %d\n", **(ptrA));

    //ptrA[2][0]
    printf("ptrA[2][0] = %d\n", ptrA[2][0]);
    printf("*(ptrA[2]) = %d\n", *(ptrA[2]));
    printf("**(ptrA+2) = %d\n", **(ptrA+2));

    //ptrA[2][2]
    printf("ptrA[2][2] = %d\n", ptrA[2][2]);
    printf("*(ptrA[2] + 2) = %d\n", *(ptrA[2] + 2));
    printf("*(*(ptrA+2) + 2) = %d\n", *(*(ptrA+2) + 2));    

    system("pause");
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    ptrA = 0X61FDE0 &ptrA[0] = 0X61FDE0 ptrA[0] = 0X61FDE0 &ptrA[0][0] = 0X61FDE0
    ptrA[0][0] = 1
    *(ptrA[0]) = 1
    **(ptrA) = 1
    ptrA[2][0] = 9
    *(ptrA[2]) = 9
    **(ptrA+2) = 9
    ptrA[2][2] = 11
    *(ptrA[2] + 2) = 11
    *(*(ptrA+2) + 2) = 11
    请按任意键继续. . .
    ------------------------------------
 */