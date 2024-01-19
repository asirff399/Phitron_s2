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
void print_normal(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }cout<<endl;
}
void print_reverse(Node* tail)
{
    Node* tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }cout<<endl;
}
int size(Node* head)
{
    Node* tmp=head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void delete_at_position(Node* head,int pos)
{
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node* delNode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete delNode;
}
void delete_tail(Node* &head,Node* &tail)
{
    Node* delNode=tail;
    tail=tail->prev;
    delete delNode;
    if(tail==NULL)
    {
        head=NULL;
    }
    tail->next=NULL;
}
void delete_head(Node* &head,Node* &tail)
{
    Node* delNode=head;
    head=head->next;
    delete delNode;
    if(head==NULL)
    {
        tail=NULL;
        return;
    }
    head->prev=NULL;
}
int main()
{
    // Node* head=NULL;
    // Node* tail=NULL;
    Node* head=new Node(10);
    Node* tail=head;
    // Node* a=new Node(20);
    // Node* b=new Node(30);
    // Node* c=new Node(40);
    // Node* tail=c;

    // head->next=a;
    // a->prev=head;
    // a->next=b;
    // b->prev=a;
    // b->next=c;
    // c->prev=b;
    
    int pos,v;
    cin>>pos>>v;
    if(pos>=size(head))
    {
        cout<<"Invalid"<<endl;
    }
    else if(pos==0)
    {
        delete_head(head,tail);
    }
    else if(pos==size(head)-1)
    {
        delete_tail(head,tail);
    }
    else
    {
        delete_at_position(head,pos);
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}