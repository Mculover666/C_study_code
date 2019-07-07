/**
 * @ brief      在函数中处理结构体
 * @ author     mculover666
 * @ date       2019年7月7日15:25:59
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

int recv_msg(struct Student* st);
int show_msg(struct Student* st);

int main(void)
{
    struct Student st1;

    recv_msg(&st1);
    show_msg(&st1);
    
    system("pause");
    return 0;
}
int recv_msg(struct Student* st)
{
    printf("请输入学生姓名：");
    scanf("%s", st -> name);
    printf("请输入学生年龄：");
    scanf("%d", &(st -> age));
    printf("请输入学生的成绩：");
    scanf("%f", &(st -> score));

    return 0;
}
int show_msg(struct Student* st)
{
    printf("%-20s %2d %5.1f\n", st->name, st->age, st->score);
    
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    请输入学生姓名：mculover666
    请输入学生年龄：21
    请输入学生的成绩：88.8
    mculover666          21  88.8
    请按任意键继续. . .
    ------------------------------------
 */