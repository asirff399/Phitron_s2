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
void level_order(Node* root)
{
    if(root==NULL)
    {
        cout<<"Invalid"<<endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* f =q.front();
        q.pop();

        cout<<f->val<<" ";

        //if(f->right) q.push(f->right); // right to left
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right); //left to right
    }
}
Node* convert(int a[], int l, int r)
{
    if(l > r) return NULL;
    int mid = (l+r)/2;
    Node* root = new Node(a[mid]);
    Node* rootLeft=convert(a,l,mid-1);
    Node* rootRight=convert(a,mid+1,r);
    root->left=rootLeft;
    root->right=rootRight;
    return root;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Node* root = convert(a,0,n-1);
    level_order(root);
    return 0;
}