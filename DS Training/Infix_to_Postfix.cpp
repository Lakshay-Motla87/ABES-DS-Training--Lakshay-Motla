#include<bits/stdc++.h>
using namespace std;
char myStack[100] ;
int top=-1;
int x;
int y;
void push(char x)
{
    myStack[++top]=x;
}
char pop()
{
    if (top==-1)
    return -1;
    else 
    x=myStack[top--];
    return x;
}
int priority(char ch)
{
    if(ch=='(')
    return 0;
    else if(ch=='+'||ch=='-')
    return 1;
    else if(ch=='*'||ch=='/')
    return 2;
    if(ch=='^')
    return 3;
    return 0;
}
int main()
{
    string exp;
    cin>>exp;
    char ch;
    for(int i=0;i<exp.length();i++)
    {
        ch=exp[i];
        if(ch=='(')
        push(ch);
        else if (isalnum(ch))
        push(ch);
        else if (ch==')')
        {
            while((y=pop())!='(')
            {
                cout<<y;
            }
        }
        else if(ch=='^')
        {
            push(ch);
        }
        else
        {
            while(!(top==-1)&&priority(myStack[top])>=priority(ch))
            {
                cout<<pop();
                push(ch);
            }
        }
        if(top==-1)
        return -1;
        cout<<pop();
    }
}
