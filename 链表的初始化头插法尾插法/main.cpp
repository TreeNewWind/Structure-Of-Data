//��ͷ�ڵ�
#include<stdio.h>

typedef struct LNode
{
    ElemType data;
    struct LNode *next;
}LNode, LinkList;

bool InitList(LinkList &L)
{
    L = (LNode *)malloc(sizeof(LNode));
    if(L == NULL)
        return false;
    L->next = NULL;
    return true;
}

//β�巨
LinkList List_TailInsert(LinkList &L)
{
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    LNode *s, *r = L;
    scanf("%d", &x);
    s = (LNode *)malloc(sizeof(LNode));//����ͷ�ڵ�
    s->data = x;
    s->next = NULL;
    r->next = s;
    r = s;
    return L;
}

//ͷ�巨
LinkList List_HeadInsert(LinkList &L)
{
    LNode *s;
    int x;
    scanf("%d", &x);
    L = (LinkList)malloc(sizeof(LNode));//����ͷ�ڵ�
    L->next = NULL;
    s = (LNode *)malloc(sizeof(LNode));
    s->data = x;
    s->next = L->next;
    L->next = s;
    return L

}
