#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int t;
    cin>>t;  
    for(int i=0;i<t;i++)
    {   
        stack<char> st;      
        string s;
        cin>>s;
        for(char c:s)
        {
            if(!st.empty()&& c == '1'&& st.top() == '0')
            {
               st.pop();
            } 
            else
            {
                st.push(c);
            }            
        }
        if(st.empty())
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