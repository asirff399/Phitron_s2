#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist={10,20,30,40,50};
    //cout<< mylist.max_size();
    //mylist.clear();
    mylist.resize(2);
    mylist.resize(5,100);
    cout<< mylist.size()<<endl;
    for(int v: mylist)
    {
        cout<<v<<endl;
    }
    return 0;
}