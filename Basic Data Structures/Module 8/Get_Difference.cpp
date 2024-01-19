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
int difference(Node* head) {
    if (!head)
        return 0;
    int mn = INT_MAX;
    int mx = INT_MIN;
    Node* newNode = head;
    while (newNode) {
        mn = min(mn, newNode->val);
        mx = max(mx, newNode->val);
        newNode = newNode->next;
    }
    int difference = mx - mn;
    return difference;
}
void print_linked_list(Node * head)
{
 Node * tmp = head;
 while(tmp != NULL)
 {
    tmp=tmp->next;
 }
}
int main()
{
    int val;
    Node* head=NULL;
    Node* tail=NULL;
    while (true)
    {
      cin>>val;
      if(val==-1) break;
      insert_tail(head,tail,val);
    }print_linked_list(head);
    cout<<difference(head);
    
    return 0;
}
