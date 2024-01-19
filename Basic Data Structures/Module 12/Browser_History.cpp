#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    string val;
    Node* next;
    Node* prev;
    Node(string val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
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
void insert_tail(Node* &head,Node* &tail,string v)
{
    Node* newNode=new Node(v);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
    
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    Node* curr=NULL;
    string val;
    while(true)
    {
        cin>>val;
        if(val == "end")
        break;
        insert_tail(head,tail,val);
    }
    int q;
    cin>>q;
     
    for(int i=1;i<=q;i++)
    {
        string cmd;
        cin>>cmd;   
        if (cmd == "visit") 
        {
            string target;
            cin >> target;
            bool found = false;         
            for (Node* tmp = head; tmp != NULL; tmp = tmp->next) 
            {
                if (tmp->val == target) 
                {
                    cout << target << endl;
                    found = true;
                    curr=tmp;
                    break;  
                }
            }
            if (found==false) 
            {
                cout << "Not Available" << endl;
            }
        }
        else if(cmd=="prev")
        {
            if(curr==NULL || curr->prev==NULL)
            {
                cout<<"Not Available"<<endl;  
            }
            else
            {
                curr=curr->prev;
                cout<<curr->val<<endl;
            }
               
        }
        else if(cmd=="next")
        {
            if(curr==NULL || curr->next==NULL)
            {
                cout<<"Not Available"<<endl;  
            }
            else
            {
                curr=curr->next;
                cout<<curr->val<<endl;
            }
  
        }
    }
    return 0;
}