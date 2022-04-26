#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top()<<"\n";
    cout<<st.empty()<<"\n";
    cout<<st.size()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
}
