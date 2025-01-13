#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;
	node(int d):data(d),left(NULL),right(NULL){
	}
};

node* insert(node* root, int d)
{
	if(root==NULL)
	{
		node* temp=new node(d);
		root=temp;
	}
	else if(d<=root->data)
	{
		root->left=insert(root->left,d);
	}
	else{
		root->right=insert(root->right,d);
	}
	return root;
}

void inorder(node* root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void preorder(node* root)
{
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(node* root)
{
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}


void bft(node* root)
{
	queue<node*> q;
	if(root!=NULL)
	{
		q.push(root);
	}
	while(!q.empty())
	{
		node* temp=q.front();
		cout<<temp->data<<" ";
		if(temp->left!=NULL)
		q.push(temp->left);
		if(temp->right!=NULL)
		q.push(temp->right);
		q.pop();
	}
}
//recursive min
int findmin(node* root)
{
  if(root==NULL)
  {
  	return -1;
  }	
  if(root->left!=NULL)
  {
  	return findmin(root->left);
  }
  	return root->data;
}

//recursive max
int findmax(node* root)
{
  if(root==NULL)
  {
  	return -1;
  }	
  if(root->right!=NULL)
  {
  	return findmax(root->right);
  }
  	return root->data;
}

int main(){
	node* root=NULL;
	root=insert(root,12);
	root=insert(root,17);
	root=insert(root,10);
	root=insert(root,7);
	root=insert(root,9);
	root=insert(root,5);
	root=insert(root,18);
	root=insert(root,20);
	root=insert(root,50);
	cout<<"inorder : ";
	inorder(root);
	cout<<endl<<"preorder : ";
	preorder(root);	
	cout<<endl<<"postorder : ";
	postorder(root);
	cout<<endl<<"breadth first traversal :";
	bft(root);
	cout<<endl<<"min :"<<findmin(root);
	cout<<endl<<"max :"<<findmax(root);
	return 0;
}
