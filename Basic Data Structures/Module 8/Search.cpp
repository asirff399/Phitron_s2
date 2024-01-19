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
void search(Node * head,int x,int pos)
{
   bool flag= false;
   Node* tmp=head;
   while(tmp!=NULL)
   {
      if(x==tmp->val)
      {
        flag=true;
        break;
      }
      pos++;
      tmp=tmp->next;
        
   }
   if(flag == true)
        {
            cout<<pos<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
   
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
    int val;
    Node* head=NULL;
    Node* tail=NULL;
    while (true)
    {
      cin>>val;
      if(val==-1) break;
      insert_tail(head,tail,val);
    }
    int x;
    cin>>x;
    int pos=0; 
    search(head,x,pos);
    } 
    return 0;
}
