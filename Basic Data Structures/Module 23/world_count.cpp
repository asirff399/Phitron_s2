#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    getline(cin,sentence);
    string word;
    stringstream ss(sentence);
    map<string,int> mp;
    int mx=0;
    while(ss>>word)
    {
        // cout<<word<<" ";
        mp[word]++;
        mx=max(mx,mp[word]);
    }
   
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        
        if(mx == it->second)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
        
    }
    //cout<<mp["love"];
    return 0;
}

