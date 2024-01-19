#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
int main()
{
    list<int> mylist;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        mylist.push_back(val);
    }
    mylist.sort();
    mylist.unique();
    for(int v:mylist)
    {
        cout<<v<<" ";
    }
    return 0;
}