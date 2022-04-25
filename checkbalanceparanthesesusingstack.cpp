#include<bits/stdc++.h>
using namespace std;
bool checkbalance(string s)
{
    int n=s.length();
    stack<char>st;
    int f1=1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='[' || s[i]=='{' || s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==']')
        {
            if(st.empty() || st.top()!='[')
            {
                f1=0;
            }
            else
            {
                //st.top()
                st.pop();
            }
        }
        else if(s[i]==')')
        {
            if(st.empty() || st.top()!='(')
            {
                f1=0;
            }
            else
            {
                st.pop();
            }
        }
        else if(s[i]=='}')
        {
            if(st.empty() || st.top()!='{')
            {
                f1=0;
            }
            else
            {
                st.pop();
            }
        }
    }
    if(st.size()!=0 || f1==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
   string s;
   cin>>s;
   cout<<checkbalance(s);
}
