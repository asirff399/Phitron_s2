#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int t;
    cin>>t;  
    for(int i=0;i<t;i++)
    {   
        stack<char> st0;    
        stack<char> st1;    
        string s;
        cin>>s;
        for(char c:s)
        {
            if( c == '0')
            {
                st0.push(c);
            } 
            else if(c== '1')
            {
                st1.push(c);
            }
            while(!st0.empty() && !st1.empty())
            {
                if(st0.top()=='0' && st1.top()=='1')
                {
                  st0.pop();
                  st1.pop();
                }
                else
                {
                    cout<<"NO"<<endl;
                    break;
                }
            }         
        }
        if(st0.empty()&& st1.empty())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }     
    } 
    return 0;
}