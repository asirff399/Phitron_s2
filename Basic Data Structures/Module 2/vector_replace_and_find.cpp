#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v={1,8,1,3,0,9,3,0,1,3,9,0,3,1,0};
    // replace(v.begin(),v.end()-1,0,44);
    // for(int x:v)
    // {
    //     cout<< x <<" ";
    // }
    vector<int> v={1,8,1,3,0,9,3,0,100,3,9,0,3,1,0};
    auto it=find(v.begin(),v.end(),100);
    if(it==v.end()) cout<<"Not Found";
    else cout<<"Founded";
    return 0;
}