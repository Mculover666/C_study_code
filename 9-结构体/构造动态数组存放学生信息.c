/**
 * @ brief      构造一个动态数组存放学生信息，并按成绩从大到小排序输出
 * @ author     mculover666
 * @ date       2019年7月7日15:50:24
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
    char  name[20];
    int   age;
    float score;
} stu;

int recv_msg(stu* st);
int show_msg(stu* st);
int bubble_msg(stu* st, int len);

int main(void)
{
    unsigned int len = 0;
    unsigned int i = 0;
    stu* st = NULL;

    printf("请输入要存储学生的个数：");
    scanf("%d", &len);

    st = (stu*)malloc(sizeof(stu)*len);

    for(i = 0; i < len; i++)
    {
        printf("请输入第%d个学生的信息：\n", i+1);
        recv_msg(st+i);
    }
    printf("学生信息如下：\n");
    printf("         姓名        |年龄|   成绩\n");
    printf("----------------------------------------\n");
    for(i = 0; i < len; i++)
    {
        show_msg(st+i);
    }

    bubble_msg(st, len);

    printf("排序后学生信息如下：\n");
    printf("         姓名        |年龄|   成绩\n");
    printf("----------------------------------------\n");
    for(i = 0; i < len; i++)
    {
        show_msg(st+i);
    } 

    free(st);
    system("pause");
    return 0;
}
int recv_msg(stu* st)
{
    printf("请输入学生姓名：");
    scanf("%s", st -> name);
    printf("请输入学生年龄：");
    scanf("%d", &(st -> age));
    printf("请输入学生的成绩：");
    scanf("%f", &(st -> score));

    return 0;
}
int show_msg(stu* st)
{
    printf("%-20s | %2d | %5.1f\n", st->name, st->age, st->score);
    
    return 0;
}
int bubble_msg(stu* st, int len)
{
    int i,j;
    stu t;

    for(i = 0;i < len - 1; i++)
    {
        for(j = 0; j < len - 1 - i; j++)
        {
            if(((st+j) -> score) < ((st+j+1) -> score))
            {
                t = *(st+j);
                *(st+j) = *(st+j+1);
                *(st+j+1) = t;
            } 
        }
    } 

    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    请输入要存储学生的个数：5
    请输入第1个学生的信息：
    请输入学生姓名：aaa
    请输入学生年龄：1
    请输入学生的成绩：1
    请输入第2个学生的信息：
    请输入学生姓名：bbb
    请输入学生年龄：2
    请输入学生的成绩：2
    请输入第3个学生的信息：
    请输入学生姓名：ccc
    请输入学生年龄：3
    请输入学生的成绩：3
    请输入第4个学生的信息：
    请输入学生姓名：ddd
    请输入学生年龄：4
    请输入学生的成绩：4
    请输入第5个学生的信息：
    请输入学生姓名：eee
    请输入学生年龄：5
    请输入学生的成绩：5
    学生信息如下：
            姓名        |年龄|   成绩
    ----------------------------------------
    aaa                  |  1 |   1.0
    bbb                  |  2 |   2.0
    ccc                  |  3 |   3.0
    ddd                  |  4 |   4.0
    eee                  |  5 |   5.0
    排序后学生信息如下：
            姓名        |年龄|   成绩
    ----------------------------------------
    eee                  |  5 |   5.0
    ddd                  |  4 |   4.0
    ccc                  |  3 |   3.0
    bbb                  |  2 |   2.0
    aaa                  |  1 |   1.0
    请按任意键继续. . .
    ------------------------------------
 */