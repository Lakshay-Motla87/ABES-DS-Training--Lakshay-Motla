#include <iostream>
using namespace std;
int top=-1;
int num;
int stack[100];
int decimal;
void push()
{
    if (top >= 99) {
        cout << "overflow" << endl;
    }
    else {
        while (num > 0) {
            int rem, power = 1, decimal = 0;
            rem = num % 10;
            num = num / 10;
            decimal += rem * power;
            power = power * 2;
            stack[++top] = decimal;
        }
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"Underflow"<<endl;
    } else {
        decimal=stack[top];
        top--;
    }
   ;
    }

int main()
{
    cout<<"Enter the binary number to be coverted to decimal"<<endl;
    cin>>num;
    push();
    pop();
     cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}