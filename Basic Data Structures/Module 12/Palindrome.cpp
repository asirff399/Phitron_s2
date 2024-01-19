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
void insert_tail(Node* &head,Node* &tail,int v)
{
    Node* newNode=new Node(v);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    } 
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}
bool palindrome(Node* head,Node* tail,bool flag)
{
    Node* i=head;
    Node* j=tail;   
    while( i!=NULL && j!= NULL && i != j  )
    {
        if(i->val != j->val)
        {      
            return false;
        }
        i=i->next;
        j=j->prev;
    }
    return true;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    bool flag=false;
    while(true)
    {
        cin>>val;
        if(val == -1)
        break;
        insert_tail(head,tail,val);
    }
    bool res=palindrome(head,tail,flag);
    if(res==true)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
   
    return 0;
}