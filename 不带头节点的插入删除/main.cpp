#include<stdio.h>
#include<stdlib.h>
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode, *LinkList;

bool InitList(LinkList &L) //&L
{
    L = NULL;
    return true;
}

bool Empty(LinkList L)
{
    if(L == NULL)
        return true;
    else
        return false;
}

bool ListInset(LinkList &L, int i; ElemType e)
{
    if(i < 1)
        return false;
    if(i == 1)
    {
        LNode *s = (LNode *)malloc(sizeof(LNode));
        s->data = e;
        s->next = L;
        L = s;
        return true;
    }
    LNode *p;
    int j = 1;
    p = L;
    while(p != NULL && j < i - 1)
    {
        p = p->next;
        j++;
    }
    if(p == NULL)
    {
        return false;
    }

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
int main()
{
    LinkList L;
    InitList(L);
    return 0;
}
