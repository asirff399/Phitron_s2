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
        //1. ber kora ano
        Node* p = q.front();
        q.pop();
        //2.jabotio ja kaj
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

        //3. children gulo k push koro
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }
    return root;
}
int count_leaf(Node* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    else
    {
        int l =count_leaf(root->left);
        int r =count_leaf(root->right);
        return l+r;
    }
}
int main()
{
    Node* root =input_tree();
    cout<<count_leaf(root);
    return 0;
}