#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;
    cin>>n>>q;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int p[n];
    p[0]=a[0];
    for(int i=1;i<n;i++)
    {
        p[i]=a[i]+p[i-1];
    }
  

    while(q--)
    {
        long long int l,r;
        cin>>l>>r;
        l--;
        r--;
        long long int sum;
        if(l==0) sum=p[r];
        else sum=p[r]-p[l-1];
        cout<<sum<<endl;
    }
    return 0;
}