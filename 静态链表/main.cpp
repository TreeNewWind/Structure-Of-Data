#include<stdio.h>

#define MaxSize 10

typedef struct Node
{
    ElemType data;
    int next;
}SLinkList[MaxSize]; //可以用SLinkList定义“一个长度为MaxSize的Node型数组”
