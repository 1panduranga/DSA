#include<iostream>
using namespace std;
struct node{
  int data;
  node* left;
  node* right;
  node(int d):data(d),left(NULL),right(NULL){}
};

node* insert(node* root,int val)
{
  if(root==NULL)
  {
    node* temp=new node(val);
   return temp;
  }
  if(val<=root->data)
    root->left=insert(root->left,val);
  else
    root->right=insert(root->right,val);
  return root;
}

void lca(node* root,int n1,int n2)
{
  if(root==NULL)
    return;
  int d=root->data;
  if(d>n1 && d>n2)
  {
    lca(root->left,n1,n2);
      return;
  }
  else if(d<n1 &&d<n2)
  {
    lca(root->right,n1,n2);
    return;
  }
  else {
    cout<<"Common ancestor of "<<n1<<" and "<<n2<<" is "<<d<<endl;
  }
}
  
int main()
{
  node* root=NULL;
  int n,n1,n2;
  cin>>n;
  while(n>=0)
  {
    root=insert(root,n);
    cin>>n;
  }
  cout<<"Enter the value of n1 and n2:"<<endl;
  cin>>n1>>n2;
  lca(root,n1,n2);
  return 0;
}
