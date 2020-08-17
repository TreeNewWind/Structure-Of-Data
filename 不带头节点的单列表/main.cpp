#include<stdio.h>

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

LNode* GetElem(LinkList L, int i)
{
    int j = 1;
    LNode *p = L->next;
    if(i == 0)
        return L;
    if(i < 1)
        return NULL;
    while(p != NULL && j < i)
    {
        p = p->next;
        j++;
    }
    return p;
}

bool Empty(LinkList L)
{
    if(L == NULL)
        return true;
    else
        return false;
}
int main()
{
    LinkList L;
    InitList(L);
    return 0;
}
