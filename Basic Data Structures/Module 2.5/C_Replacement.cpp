#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            cout<< 0 <<" ";
        }
        else if(x<0)
        {
            cout<<2<<" ";
        }
        else if(x>0)
        {
            cout<<1<<" ";
        }

    }
    return 0;
}