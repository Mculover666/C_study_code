/**
 * @ brief      变化动态一维数组的长度
 * @ author     mculover666
 * @ date       2019年7月1日16:03:04
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int  len = 0;
    int* pArr = NULL;
    int  i;

    //动态构造数组
    printf("请输入数组的长度:");
    scanf("%d", &len);
    pArr = (int*)malloc(sizeof(int) * len);
    if(pArr == NULL)
    {
        printf("数组构造失败\n");
        return -1;
    }
    printf("动态数组构建成功(pArr = %#X)\n", pArr);

    //开始改变数组的长度
    for(i = 0; i < 2; i++)
    {
        printf("请输入新的长度:");
        scanf("%d", &len);
        pArr = (int*)realloc(pArr,sizeof(int) * len);
        if(pArr == NULL)
        {
            printf("数组长度改变失败\n");
            return -1;
        }
        printf("新的动态数组构造成功(pArr = %#X)\n", pArr);
    }
    
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
    动态数组构建成功(pArr = 0XC11420)
    请输入新的长度:1
    新的动态数组构造成功(pArr = 0XC11420)
    请输入新的长度:10
    新的动态数组构造成功(pArr = 0XC11420)

    动态数组空间已释放(pArr = 0XC11420)
    请按任意键继续. . .
    ------------------------------------
 */