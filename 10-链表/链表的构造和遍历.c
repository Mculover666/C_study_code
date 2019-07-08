/**
 * @ brief      链表的构造
 * @ author     mculover666
 * @ date       2019年7月8日10:12:26
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    //数据域
    int data;

    //指针域 — 指向下一个节点
    struct node* nextNode;  
} Node;

Node* createList(int len);
int traverse(Node* pHead);
int freeList(Node* pHead);

int main(void)
{
    //创建头指针
    Node* pHead = NULL;
    int len = 0;

    //请求用户输入节点个数
    printf("请输入链表的有效节点个数:");
    scanf("%d", &len);
    
    //创建链表
    pHead = createList(len);

    //遍历链表输出
    traverse(pHead);

    //释放链表占用的存储空间
    freeList(pHead);

    system("pause");
    return 0;
}
/**
 * @ brief    动态创建一个非循环单链表
 * @ param    len - 有效节点的个数
 * @ retval   成功-返回链表地址
 */
Node* createList(int len)
{
    int i = 0;
    Node* pHead = NULL;     //指向头节点
    Node* pTail = NULL;     //指向尾节点
    Node* pNew = NULL;      //指向新创建的节点

    //分配一个不存放有效数据的头节点，并将其地址返回给头节点的指针
    pHead = (Node*)malloc(sizeof(Node));
    //检查头结点是否分配成功
    if(NULL == pHead)
    {
        printf("头结点分配失败，程序结束\n");
        exit(-1);
    }

    //将头节点作为尾节点，构造出一个空链表
    pHead->nextNode = NULL;
    pTail = pHead;

    //循环插入有效节点
    for(i = 0; i < len; i++)
    {
        //分配一个新的节点
        pNew = (Node*)malloc(sizeof(Node));
        if(NULL == pNew)
        {
            printf("有效节点分配失败，程序结束\n");
            exit(-1);
        }

        //请求用户输入该有效节点的数据
        printf("请输入第%d个有效节点的值:", i+1);
        scanf("%d", &(pNew -> data));


        //将新的节点作为尾节点插入(重点)
        pNew->nextNode  = NULL;
        pTail -> nextNode = pNew;
        pTail = pNew;
    }

    //链表创建完成
    printf("链表创建成功\n");
    return pHead;
}
/**
 * @ breif  遍历链表输出
 * @ param  pHear - 链表头指针
 * @ retval 无
 */
int traverse(Node* pHead)
{
    Node* p = pHead -> nextNode;

    while(NULL != p)
    {
        printf("%d ", p->data);
        p = p->nextNode;
    }
    printf("\n");

    return 0;
}
/**
 * @ brief  释放动态链表占用的空间
 * @ param  pHead-链表头指针位置
 * @ retval 无
 */
int freeList(Node* pHead)
{
    Node* p = pHead;
    Node* t = NULL;
    int i = 0;

    while(NULL != p)
    {
        t = p->nextNode;
        free(p);
        p = t;
        printf("释放第%d个链表节点\n",(i++)+1);
    }
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    请输入链表的有效节点个数:5
    请输入第1个有效节点的值:1
    请输入第2个有效节点的值:2
    请输入第3个有效节点的值:3
    请输入第4个有效节点的值:4
    请输入第5个有效节点的值:5
    链表创建成功
    1 2 3 4 5
    释放第1个链表节点
    释放第2个链表节点
    释放第3个链表节点
    释放第4个链表节点
    释放第5个链表节点
    释放第6个链表节点
    请按任意键继续. . .
    ------------------------------------
 */