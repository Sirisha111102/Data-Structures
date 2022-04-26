#include<bits/stdc++.h>
using namespace std;
//define structure for stack 
struct mystack
{
    int *arr;
    int capacity;
    int top;
    //in structure we can have constructor 
    mystack(int c)
    {
        arr=new int[c];
        capacity=c;
        top=-1;
    }
    //push the data into stack
    void push(int val)
    {
        if(top==capacity-1)
        {
            cout<<"Stack is filled"<<endl;
            return;//use return if we are not using else
        }
        top++;
        arr[top]=val;
    }
    int pop()
    {
        if(top==-1)
        {
            return INT_MIN;//prints negative value which is small
        }
        int ele=arr[top];
        top--;
        return ele;
    }
    int peek()
    {
        if(top==-1)
        {
            return INT_MIN;
        }
        return arr[top];
    }
    int size()
    {
        return top+1;
    }
    bool empty()
    {
       /* if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }*/
        return top==-1;
    }
};
int main()
{
    //create stack variable
    //mystack *st=new mystack(5);//as it takes pointers
    mystack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.pop()<<endl;
    cout<<st.peek()<<endl;
    st.push(40);
    cout<<st.peek()<<endl;
    cout<<st.empty()<<endl;
    cout<<st.size()<<endl;
    st.push(50);
    cout<<st.size()<<endl;
}
