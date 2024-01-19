#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class myStack
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
       Node* newNode=new Node(val);
       if(head==NULL)
       {
        head = newNode;
        tail = newNode;
        return;
       }
       tail->next=newNode;
       newNode->prev=tail;
       tail=tail->next;
    }
    void pop()
    {
        sz--;
        Node* delNode = tail;
        tail=tail->prev;
        if(tail==NULL)
        {
            head=NULL;
            delete delNode;
            return;
        }
        tail->next=NULL;
        delete delNode; 
    }
    int top()
    {
       return tail->val; 
    }
    int size()
    {
      return sz;
    }
    bool empty()
    {
       if(sz==0) return true;
       else return false;
    }
};
class myQ
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int val)
    {
       sz++;
       Node* newNode=new Node(val);
       if(head==NULL)
       {
            head = newNode;
            tail = newNode;
            return;
       }
       tail->next=newNode;
       newNode->prev=tail;
       tail=tail->next;
    }
    void pop()
    {
        sz--;
        Node* delNode =head;
        head=head->next;
        if(head==NULL)
        {
            tail=NULL;
            delete delNode;
            return;
        }
        head->prev=NULL;
        delete delNode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
       if(sz==0) return true;
        else return false;
    }
};
int main()
{
    myStack st;
    myQ q;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int v;
        cin>>v;
        st.push(v);
    }
    for(int i=0;i<m;i++)
    {
        int v;
        cin>>v;
        q.push(v);
    }
    if(n!=m)
    {
        cout<<"NO";
        return 0;
    } 
    while(!st.empty() && !q.empty())
    {
        if(st.top()==q.front())
        {
            st.pop();
            q.pop();
        } 
        else
        {
            break;
        }    
    }
    if(st.empty() && q.empty())
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}