#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v1;
    vector<int> v2;
    vector<int> c;
    for(int i=0;i<n;i++)
    {
        int x1;
        cin>>x1;
        v1.push_back(x1);
        
    }
    for(int i=0;i<n;i++)
    {
        int x2;
        cin>>x2;
        v2.push_back(x2);
        
    }
   
    c.insert(c.begin(),v2.begin(),v2.end());
    c.insert(c.begin()+n,v1.begin(),v1.end());
    for(int val:c)
    {
        cout<<val<<" ";
    }
    return 0;
}