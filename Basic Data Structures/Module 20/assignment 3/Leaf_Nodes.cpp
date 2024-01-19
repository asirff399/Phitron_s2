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
void theLeaf(Node* root)
{
    if (!root) return;
    queue<Node*> q;
    vector<int> v;
    q.push(root);
    while(!q.empty())
    {
        Node* f =q.front();
        q.pop();

        if(f->left == NULL && f->right==NULL)
        {
           v.push_back(f->val);
        }
        
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right); 
        
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int val: v)
    {
        cout<<val<<" ";
    }
    
}
int main()
{
    Node* root =input_tree();
    theLeaf(root);
    return 0;
}