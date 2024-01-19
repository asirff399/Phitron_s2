#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n); 
    for(int i=0;i<q;i++)
    {
        int x;
        cin>>x; 
        int l=0;
        int r=n-1;
        bool find=false;
        while(l<=r)
        {           
            int mid = l+(r-l)/2;
            if(a[mid]==x)
            {
                find=true;
                break;
            }
            if(x < a[mid])
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
         if(find) cout<<"found"<<endl;
         else cout<<"not found"<<endl;
    }
    return 0;
}
