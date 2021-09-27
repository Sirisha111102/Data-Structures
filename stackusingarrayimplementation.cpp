//stack implementation using arrays
#include <iostream>
using namespace std;
#define MAX_SIZE 101
int a[MAX_SIZE];
int top=-1;//empty stack
//push element into the stack
void push(int x)
{
    if(top==MAX_SIZE-1)
    {
        cout<<"stack overflow";
        return;
    }
    top=top+1;
    a[top]=x;
    //a[++top]=x;
}
//pop element from stack
void pop()
{
    if(top==-1)
    {
        cout<<"stack underflow";//no element is popped from the stack
        return;
    }
    top=top-1;
}
//top of the element in stack
int Top()
{
    return a[top];
}
//check whether stack is empty or not
bool Isempty()
{
    if(top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//for knowing that operations are performing in the stack
void Print()
{
    cout<<"Stack:"<<" ";
    for(int i=0;i<=top;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main() 
{
    push(2);
    Print();
    push(4);
    Print();
    push(7);
    Print();
    pop();
    Print();
    Top();
    push(8);
    Print();
    pop();
    pop();
    pop();
    Print();
	
}
