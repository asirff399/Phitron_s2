#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin,s);
        string word;
        stringstream ss(s);
        map<string,int> mp;
        int mx=0;
        string maxWord="";
        while(ss>>word)
        {
            mp[word]++;
            if(mp[word]>mx)
            {
                mx=mp[word];
                maxWord= word;
            }
        }
       cout<<maxWord<<" "<<mx<<endl;

    }
    
    return 0;
}