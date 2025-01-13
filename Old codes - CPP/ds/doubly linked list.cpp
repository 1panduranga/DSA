#include<iostream>
using namespace std;
struct node{
	int data;
	node* prev;
	node * next;
};
node * head;

void inatend(int x)
{
	node *temp=new node();
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	{
		temp->prev=NULL;
		head=temp;
		return;
	}
	node *temp1=head;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp->prev=temp1;
	temp1->next=temp;
}
void inatbeg(int x)
{
	node *temp=new node();
	temp->data=x;
	temp->prev=NULL;
	temp->next=head;
	if(head!=NULL)
	{
    head->prev=temp;  
	}
	head=temp;
}
//print forward
void printfwd()
{
	node* temp =head;
	if(head==NULL)
	{
		cout<<"no elements"<<endl;
		return;
	}
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

//print rev
void printrev()
{
	node* temp=head;
	if(head==NULL){
		cout<<"empty"<<endl;
		return;
	}
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
		while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->prev;
	}
	
}
int main(){
   head=NULL;
   printfwd();
   printrev();
      inatend(9);
   inatbeg(6);
   inatbeg(1);
   inatend(7);
	printfwd();
	cout<<endl;
	printrev();
}
