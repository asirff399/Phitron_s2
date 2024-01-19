#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    queue<string> qs;
    for(int i=0;i<q;i++)
    {       
        int n;
        cin>>n;
        if(n==0)
        {
            string s;
            cin>>s;
            qs.push(s); 
        }
        else if(n==1)
        {
            if(qs.empty())
            {
                cout<<"Invalid"<<endl;
            }
            else
            {
                cout<<qs.front()<<endl;
                qs.pop();
            }        
        }
    }
    return 0;
}