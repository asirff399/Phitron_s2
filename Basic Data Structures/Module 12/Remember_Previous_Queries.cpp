#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->prev=NULL;
        this->next=NULL;
    }
};
void print_list(list<int>mylist)
{  
    for(int v:mylist)
    {
        cout<<v<<" ";
    }cout<<endl;
}
int main()
{
    int q;
    cin>>q;
    list<int> mylist;
    for(int i=1;i<=q;i++)
    {            
        int x,v;
        cin>> x >> v;
        if(x==0)
        {
            mylist.push_front(v);             
        }
        else if(x==1)
        {
            mylist.push_back(v);         
        }
        else if(x==2)
        {                
            
            if (v >= 0 && v < mylist.size())
            {
                mylist.erase(next(mylist.begin(),v));
            }
        }
        cout<<"L -> ";
        print_list(mylist);
        mylist.reverse();
        cout<<"R -> "; 
        print_list(mylist);
        mylist.reverse();
    } 
    return 0;
}

