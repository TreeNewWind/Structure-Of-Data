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
        return false; //·ÖÅäÊ§°Ü
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
int main()
{
    LinkList L;
    InitList(L);
    return 0;
}
