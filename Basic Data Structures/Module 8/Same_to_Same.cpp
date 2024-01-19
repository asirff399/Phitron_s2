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

void same_to_same(Node* head1,Node* head2,int ls1,int ls2)
{
    if(ls1!=ls2)
    {
        cout<<"NO";
        return;
    }
    bool flag=true;
    Node* tmp1=head1;
    Node* tmp2=head2;
    while(tmp1 != NULL && tmp2 != NULL)
    {
       if(tmp1->val != tmp2->val) 
       {
        flag=false;
        break;
       }
       tmp1 = tmp1->next;
       tmp2 = tmp2->next;
    }
    if(flag==true)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
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
  
    int val;
    Node* head1=NULL;
    Node* tail1=NULL;
    while (true)
    {
      cin>>val;
      if(val==-1) break;
      insert_tail(head1,tail1,val);
    }
    Node* head2=NULL;
    Node* tail2=NULL;
    while (true)
    {
      cin>>val;
      if(val==-1) break;
      insert_tail(head2,tail2,val);
    }
    same_to_same(head1,head2,size(head1),size(head2));
    return 0;
}
