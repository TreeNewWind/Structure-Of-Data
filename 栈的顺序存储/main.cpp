#include<stdio.h>

#define MaxSize 20



typedef struct
{
    ElemType data[MaxSize];
    int top; //Ö¸ÏòÕ»¶¥ÔªËØ
}SqStack;

void InitStack(SqStack &S)
{

    S.top = -1;
}

bool StackEmpty(SqStack S)
{
    if(S.top == -1)
    {
        return true; //Õ»¿Õ
    }
    else
    {
        return false; //²»¿Õ
    }
}

bool Push(SqStack &S, ElemType x)
{
    if(S.top == MaxSize - 1)
        return false; //Õ»Âú
    S.top = S.top + 1; // S.data[++S.top] = x;
    S.data[S.top] = x;
    return true;
}

bool Pop(SqStack &S, ElemType &x)
{
    if(S.top == -1)
        return false;
    x = S.data[S.top];
    S.top--;
    return true;
}



