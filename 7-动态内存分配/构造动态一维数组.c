/**
 * @ brief      构造一个动态的一维数组
 * @ author     mculover666
 * @ date       2019年7月1日15:30:09
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int len = 0;
    int *pArr = NULL;
    int i = 0;

    printf("请输入数组的长度:");
    scanf("%d", &len);

    //动态构造数组
    pArr = (int*)malloc(sizeof(int) * len);
    if(pArr == NULL)
    {
        printf("数组构造失败\n");
        return -1;
    }
    printf("动态数组构建成功(pArr = %#X)\n", pArr);

    //由用户对动态数组赋值
    for(i = 0; i< len;i++)
        scanf("%d", pArr+i);
    
    //打印动态数组
    for(i = 0; i < len; i++)
        printf("p[%d] = %d ", i, *(pArr+i));
    
    //释放动态数组的空间
    free(pArr);
    printf("\n动态数组空间已释放(pArr = %#X)\n", pArr);

    system("pause");
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    请输入数组的长度:5
    动态数组构建成功(pArr = 0XC31420)
    11 25 -66 2 88
    p[0] = 11 p[1] = 25 p[2] = -66 p[3] = 2 p[4] = 88
    动态数组空间已释放(pArr = 0XC31420)
    请按任意键继续. . .
    ------------------------------------
 */