#include<stdio.h>
#include<stdlib.h>

typedef struct DNode
{
    ElemType data;
    struct DNode *prior, *next;
}DNode, *DLinklisk;

bool InitDLinklisk(DLinklisk &L)
{
    L = (DNode *)malloc(sizeof(DNode));
    if(L == NULL)
        return false;
    L->prior = NULL; //头节点的prior永远指向NULL
    L->next = NULL;
    return true;
}

//在p节点之后插入s节点
bool InserNextDNode(DNode *p, DNode *s)
{
    if(p == NULL || s == NULL)
        return false;
    s->next = p->next;
    if(p->next != NULL)
        p->next->prior = s;
    s->prior = p;
    p->next = s;
    return true;
}

bool DeletNextDNode(DNode *p)
{
    if(p == NULL)
        return false;
    DNode *q = p->next;
    if(q == NULL)
        return false;
    p->next = q->next;
    if(q->next != NULL)
        q->next->prior = p;
    free(q);
    return true;

}

void DestoryList(DLinklisk &L)
{
    while(L->next != NULL)
    {
        DeletNextDNode(L)
    }
    free(L);
    L=NULL;
}
