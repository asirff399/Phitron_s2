#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist={20,40,10,50,30,10,10};
    //mylist.remove(10);
    //sort(mylist.begin(),mylist.end(),greater<int>()); //wrong
    //mylist.sort();
    // mylist.sort(greater<int>());
    // mylist.unique();
    mylist.reverse();

    for(int v : mylist)
    {
        cout<<v<<endl;
    }
    return 0;
}