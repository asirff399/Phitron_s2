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
void insert_head(Node* &head,int v)
{
    Node* newNode=new Node(v);
    newNode->next=head;
    head=newNode;
}
void insert_tail(Node* &head,Node* &tail,int v)
{
 Node* newNode=new Node(v);
 if(head==NULL)
 {
    head=newNode;
    tail=newNode;
 }
 else
 {
   if(tail == NULL)
   {
    tail = head;
    while(tail->next!= NULL)
    {
        tail = tail->next;
    }
   }
    tail->next=newNode;
    tail=newNode;
 }  
}
void delete_node(Node* &head, Node* &tail, int pos)
{
    if (pos == 0 && head)
    {
        Node* delNode = head;
        head = head->next;
        delete delNode;
        if (head == NULL) 
        {
            tail = NULL; 
        }
    }
    else
    {
        Node* tmp = head;
        for (int i = 1; i <= pos - 1 && tmp && tmp->next; i++)
        {
            tmp = tmp->next;
        }
        if (tmp && tmp->next)
        {
            Node* delNode = tmp->next;
            tmp->next = tmp->next->next;
            delete delNode;
            if (tmp->next == NULL)
            {
                tail = tmp; 
            }
        }
    }
}
void print_linked_list(Node * head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";    
        tmp=tmp->next;
    }
    cout<<endl;
}
int main()
{
    int q;
    cin>>q;
    Node* head=NULL;
    Node* tail=NULL;
    for(int i=1;i<=q;i++)
    {
        int x,v;
        cin>>x>>v;
       
        if(x==0)
        {
            insert_head(head,v);        
        }
        else if(x==1)
        {
            insert_tail(head,tail,v);
  
        }
        else if(x==2)
        {
            int pos=v;
            if(pos<i)
            {               
                delete_node(head,tail,pos);
            }        
        } 
        print_linked_list(head);   
    }
    return 0;
}