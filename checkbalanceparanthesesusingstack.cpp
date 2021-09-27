#include <iostream>
#include<bits/stdc++.h>
using namespace std;
char top=-1;
bool checkbalanceparantheses(string s)
{
    stack<char>a;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
        {
            a.push(s[i]);
            top=s[i];
            //cout<<top<<endl;
        }
        else if(s[i]==')')
        {
            if(a.empty() || top!='(')
            {
                return false;
            }
            else
            {
                a.pop();
            }
        }
        else if(s[i]==']')
        {
            if(a.empty() || top!='[')
            {
                return false;
            }
            else
            {
                a.pop();
            }
        }
        else if(s[i]=='}')
        {
            if(a.empty() || top!='{')
            {
                return false;
            }
            else
            {
                a.pop();
            }
        }
    }
    return a.empty()?true:false;
    /*
    if(a.empty())
    {
      return true;
    }
    else
    {
       return false;
    }*/
}

int main() 
{
    string s;
    cin>>s;
    cout<<checkbalanceparantheses(s);
}
