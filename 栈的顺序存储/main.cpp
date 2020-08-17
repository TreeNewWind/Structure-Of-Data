#include<stdio.h>

#define MaxSize 20



typedef struct
{
    char data[MaxSize];
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

bool Push(SqStack &S, char x)
{
    if(S.top == MaxSize - 1)
        return false; //Õ»Âú
    S.top = S.top + 1; // S.data[++S.top] = x;
    S.data[S.top] = x;
    return true;
}

bool Pop(SqStack &S, char &x)
{
    if(S.top == -1)
        return false;
    x = S.data[S.top];
    S.top--;
    return true;
}

bool brackerCheck(char str[], int length)
{
    int i;
    SqStack S;
    for(i = 0; i < length; i++)
    {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{')
            {

                Push(S, str[i]);
            }
        else
        {
            if(StackEmpty(S))
                return false;

            char topElem;
            Pop(S, topElem);

            if(str[i] == ')' && topElem != '(')
                return false;
            if(str[i] == ']' && topElem != '[')
                return false;
            if(str[i] == '}' && topElem != '{')
                return false;
        }
    }
    return StackEmpty(S);
}

int main()
{
    char s[5];
    scanf("%s", s);


    bool flag;
    flag = brackerCheck(s, 5);

    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;

}

