#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<>> pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int lv;
        cin>>lv;
        pq.push(lv);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int c;
        cin>>c;
        if(c==0)
        {
            int x;
            cin>>x;
            pq.push(x);
            if(pq.empty()) cout<<"Empty"<<endl;
            else cout<<pq.top()<<endl;
        }
        else if(c==1)
        {
            if(pq.empty()) cout<<"Empty"<<endl;
            else cout<<pq.top()<<endl;
        }
        else
        {
            while(!pq.empty() && pq.top()!=pq.top())
            {
                pq.pop();
            }
            if(!pq.empty())
            {
                pq.pop();
                if(pq.empty()) cout<<"Empty"<<endl;
                else cout<<pq.top()<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
    }

    
    return 0;
}