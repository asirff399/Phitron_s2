#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        int curr_idx= v.size()-1;
        while(curr_idx!=0)
        { 
            int parent_idx= (curr_idx-1)/2;
            if(v[parent_idx] < v[curr_idx]) swap(v[curr_idx],v[parent_idx]);
            else break;
            curr_idx=parent_idx;
        }     
    }

        for(int val: v)
        {
            cout<< val<<" "; 
        }
     
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v={50,40,45,30,35,42,32,25,20,10};
//     int x;
//     cin>>x;
//     v.push_back(x);
//     int curr_idx= v.size()-1;
//     while(curr_idx!=0)
//     { 
//         int parent_idx= (curr_idx-1)/2;
//         if(v[parent_idx] < v[curr_idx]) swap(v[curr_idx],v[parent_idx]);
//         else break;
//         curr_idx=parent_idx;
//     }
//     for(int val: v)
//     {
//         cout<< val<<" "; 
//     }   
//     return 0;
// }