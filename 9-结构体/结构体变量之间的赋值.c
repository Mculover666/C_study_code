/**
 * @ brief      结构体变量之间的赋值
 * @ author     mculover666
 * @ date       2019年7月7日15:40:43
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char  name[20];
    int   age;
    float score;
};

int main(void)
{
    struct Student st1 = {"mculover666-1",20, 100.0};
    struct Student st2 = {"mculover666-2",25, 20.0};
    
    st2 = st1;

    printf("%-20s %2d %5.1f\n", st1.name, st1.age, st1.score);

    system("pause");
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    mculover666-1        20 100.0
    请按任意键继续. . .
    ------------------------------------
 */