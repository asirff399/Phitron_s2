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
int maxHeight(Node* root)
{
    if(root==NULL) return 0;
    int l =maxHeight(root->left);
    int r =maxHeight(root->right);
    return max(l,r)+1;
}
bool isPerfect(Node* root)
{
    if(root == NULL) return true;
    if (root->left == NULL && root->right == NULL) return true;
    if(root->left == NULL || root->right == NULL) return false;
    bool l = isPerfect(root->left);
    bool r = isPerfect(root->right);
    
   if( l && r && maxHeight(root->left) == maxHeight(root->right))
   {
    return true;
   }  
   return false;
}
int theLevel(Node* root)
{
    queue<pair<Node*,int>> q;
    q.push({root,1});
    
    int level = 0;
    while(!q.empty())
    {     
        pair<Node*,int> pr = q.front();
        Node* node = pr.first;
        level = pr.second;
        q.pop();
        if(node->left)
        {
            q.push({node->left,level+1});
        }
        if(node->right)
        {
            q.push({node->right,level+1});
        }
       
    }
     return level;
}

int main()
{
    Node* root =input_tree();
    if(isPerfect(root)) cout<<"YES";
    else cout<<"NO";
    return 0;
}