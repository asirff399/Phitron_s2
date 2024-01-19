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
void print_linked_list(Node * head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
       
        tmp=tmp->next;
    } cout<<endl;
}
void delete_node(Node* head,int pos)
{
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;

    }
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
}
void delete_head(Node* &head)
{
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
}
int size(Node* head)
{
    Node* tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

    print_linked_list( head);

    int pos;
    cin>>pos;
    if(pos>=size(head))
    {
        cout<<"Invalid Index"<<endl;
    }
    else if(pos==0)
    {
      delete_head(head);  
    }
    else
    {
        delete_node(head,pos);
    }
   
    print_linked_list(head);
    return 0;
}