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
void insert_tail(Node* &head,Node* &tail,int v)
{
 Node* newNode=new Node(v);
 if(head==NULL)
 {
    head=newNode;
    tail=newNode;
    return;
 }
    tail->next=newNode;
    tail=newNode;
}
void print_linked_list(Node * head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
       
        tmp=tmp->next;
    } cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_tail(head,tail,val);
       
    }
  
    for(Node* i=head;i->next!=NULL;i=i->next)
    {
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
           // if(i->val < j->val) / reverse
            {
                swap(i->val,j->val);
            }
          
        }
    }
    print_linked_list(head);
    return 0;
}