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
void insert_at_position(Node* head,int pos,int v)
{
    Node* newNode = new Node(v);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next; 
    newNode->prev=tmp; 
    if(tmp->next!=NULL)
    {
        tmp->next->prev=newNode;
    }
    tmp->next=newNode;  
}
void insert_head(Node* &head,Node* &tail,int val)
{
 Node* newNode = new Node(val);
 if(head==NULL)
 {
    head=newNode;
    tail=newNode;
    return;
 }
 newNode->next=head;
 head->prev=newNode;
 head=newNode;
}
void reverse(Node* &head, Node* &tail) {
    Node* curr = head;
    Node* tmp = NULL;
    while (curr != NULL) {
        tmp = curr->prev;
        curr->prev = curr->next;
        curr->next = tmp;
        curr = curr->prev;
    }
    
    if (tmp != NULL) {
        head = tmp->prev;
        tail = curr;
    }
}

void print_normal(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
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
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int x,v;
        cin>> x >> v ;
        if( x > size(head) )
        {
            cout<<"Invalid"<<endl;
        }
        else
        {
            if( x == 0 )
            { 
                insert_head(head,tail,v); 
            }
            else
            {
                insert_at_position(head,x,v);             
            }  
            cout<<"L -> ";
            print_normal(head);
            reverse(head,tail);
            cout<<"R -> "; 
            print_normal(head);
            reverse(head,tail);
        }
    }
    return 0;
}
