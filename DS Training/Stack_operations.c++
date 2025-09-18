#include<iostream>
using namespace std;
void push(int stack[],int n,int x);
void display();
int pop();
int top=-1;
int x;
int n;
int* stack;
void push(int stack[],int n,int x)
{
    if(top==n-1)
    {
        cout<<"Overflow"<<endl;
    } else {
        stack[++top]=x;
    }
}
int pop()
{
    return 0;
}
int pop(int stack[], int n)
{
    if(top==-1)
    cout<<"Underflow"<<endl;
    else{
        x=stack[top];
        top--;
    }
    return x;
}
void display(int stack[],int n)
{
    for(int i=top;i>=0;i--)
    {
        cout<<stack[i]<<" ";
    }
}
int main()
{
    int choice;
    cout<<"Enter the size of stack"<<endl;
    cin>>n;
    stack = new int[n];
    do{
        cout<<"Enter 1.Push \n 2.Pop \n 3.Display"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: push(stack,n,x);
            cout<<"Enter the element to be pushed"<<endl;
            cin>>x;
            push(stack,n,x);
            break;
            case 2:
            cout<<endl<<"Popped element is "<<pop(stack,n)<<endl;
            break;
            case 3:
            display(stack,n);
            break;
            default:
            cout<<"Invalid choice"<<endl;
        }
        cout<<"Enter 4 to exit"<<endl;           
    } while(choice != 4);
    delete[] stack;
}