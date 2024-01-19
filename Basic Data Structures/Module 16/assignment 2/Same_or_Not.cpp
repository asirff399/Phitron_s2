#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int v;
        cin>>v;
        st.push(v);
    }
    for(int i=0;i<m;i++)
    {
        int v;
        cin>>v;
        q.push(v);
    }
    if(n!=m)
    {
        cout<<"NO";
        return 0;
    } 
    while(!st.empty() && !q.empty())
    {
        if(st.top()==q.front())
        {
            st.pop();
            q.pop();
        } 
        else
        {
            break;
        }    
    }
    if(st.empty() && q.empty())
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}