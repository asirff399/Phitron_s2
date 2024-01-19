#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val == -1) root= NULL;
    else root = new Node (val);
    queue<Node*> q; 
    if(root) q.push(root);
    while(!q.empty())
    {
       
        Node* p = q.front();
        q.pop();
        
        int l,r;
        cin>>l>>r;
        Node* left;
        Node* right;
        if(l == -1) left=NULL;
        else left= new Node(l);
        if(r == -1) right=NULL;
        else right= new Node(r);
        
        p->left=left;
        p->right=right;
       
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }
    return root;
}
void printLeft(Node* root)
{
    if(root==NULL)
    {
        return;
    } 
        if(root->left)
        {
            printLeft(root->left);
            cout<<root->left->val<<" ";
        }
        else
        {
            if(root->right)
            {
                printLeft(root->right);
                cout<<root->right->val<<" ";
            }             
        }      
}
void printRight(Node* root)
{
    if(root==NULL)
    {
        return;
    }  
        if(root->right)
        {
            cout<< root->right->val <<" ";
            printRight(root->right);
           
        }
        else
        {
            if(root->left)
            {
                cout<<root->left->val<<" ";
                printRight(root->left);
            }               
        }      
}
int main()
{
    Node* root =input_tree();
    if(root->left)
    {
        printLeft(root);
    }   
    cout<<root->val<<" "; 
    if(root->right)
    {
        printRight(root);
    }  
    return 0;
}