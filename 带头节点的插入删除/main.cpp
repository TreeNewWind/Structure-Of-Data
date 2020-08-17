#include<stdio.h>
#include<stdlib.h>
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode, *LinkList;

bool InitList(LinkList &L) //&L
{
    L = (LNode *)malloc(sizeof(LNode));
    if(L == NULL)
        return false; //分配失败
    L->next = NULL;
    return true;
}


bool Empty(LinkList L)
{
    if(L->next == NULL)
        return true;
    else
        return false;
}

bool ListInsert(LinkList &L, int i; Elemtype e) //&L
{
    if(i < 1)
        return false;
    LNode *p;
    int j = 0;
    p = L;
    while(p != NULL && j < i - 1)
    {
        p = p->next;
        j++;
    }
    if(p == NULL) // i值不合法
        return false;
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;

}


//前插操作：在p节点之前插入元素e；
bool InserPriorNode(LinkList L, LNode *p; ElemType e);

bool InserPriorNode(LNode *p; ElemType e)
{
    if(p == NULL)
    {
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    if(s == NULL)
        return false;
    s->next = p->next;
    p->next = s;
    s->data = p->data;
    p->data = e;
    return true;
}

bool ListDelet(LinkList &L, int i, ElemType &e)
{
    if(i < 1)
        return false;
    LNode *p;
    int j = 0;
    p = L;
    while(p != NULL && j < i - 1)
    {
        p = p->next;
        j++;
    }
    if(p == NULL)
        return false;
    if(p->next == NULL)
        return false;
    LNode *q = p->next;
    e = q->data;
    p->next = q->next;
    free(q);
    return true;
}

//删除指定节点p(p不能是最后一个节点）
bool DeletNode(LNode *p)
{
    if(p == NULL)
        return false;
    LNode *q = p->next;
    p->data = p->next->data;
    p->next = q->next;
    free(q)
    return true;
}

int main()
{
    LinkList L;
    InitList(L);
    return 0;
}
