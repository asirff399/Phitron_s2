#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {30,20,30,40,30,60,30,80};
    // list<int> newlist= {100,200,300};
    // vector<int> v ={60,70,80};
    //newlist=mylist;
    //newlist.assign(mylist.begin(),mylist.end());
    // mylist.push_front(1);
    // mylist.push_back(100);

    // mylist.pop_front();
    // mylist.pop_back();
    // mylist.pop_front();
    // mylist.pop_back();
    // mylist.pop_back();

    //mylist.insert(next(mylist.begin(),0),100);
    //mylist.erase(next(mylist.begin(),2));
    //mylist.insert(next(mylist.begin(),4),newlist.begin(),newlist.end());
    //mylist.insert(next(mylist.begin(),5),v.begin(),v.end());
    //mylist.erase(next(mylist.begin(),2),next(mylist.begin(),5));
    // replace(mylist.begin(),mylist.end(),30,69);
    // for(int v: mylist)
    // {
    //     cout<<v<<endl;
    // }
    auto it =find(mylist.begin(),mylist.end(),30);
    cout<<*it<<endl;
    if(it==mylist.end())
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<"Found";
    }
    return 0;
}