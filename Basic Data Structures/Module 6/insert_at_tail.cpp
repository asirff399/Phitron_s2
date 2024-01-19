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
void insert_at_tail(Node *&head,int v)
{
   Node * newNode = new Node(v);

   Node* tmp = head;

   if(head == NULL)
   {
     head=newNode;
     return;
   }

   while(tmp->next!= NULL)
   {
        tmp=tmp->next;
   }
   tmp->next=newNode;
}
void print_linked_list(Node * head)
{
 Node * tmp = head;
 while(tmp != NULL)
 {
    cout<<tmp->val<<" ";
    tmp=tmp->next;
 }
}
int main()
{
    Node* head=NULL;
    while(true)
    {
    cout<<"Option 1 : Linked At Tail "<<endl;
    cout<<"Option 2 : Print Linked List "<<endl;
    cout<<"Option 3 : Terminate "<<endl;
    int op;
    cin>>op;
    if( op == 1)
    {
        cout<<"Please enter value :"<<endl;
        int v;
        cin>>v;
        insert_at_tail(head,v);
    }
    else if(op == 2)
    {
        print_linked_list(head);
    }
    else if(op == 3)
    {
        break;
    }
    
    }  
    return 0;
}