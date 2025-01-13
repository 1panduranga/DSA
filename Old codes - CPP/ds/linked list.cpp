#include<iostream>
using namespace std;
struct node
{
	int data;
	node * link;
};

node* head;

//

//print the elements using recursion
void printrec(node *l)
{
	if(l!=NULL){
	cout<<l->data<<" ";
	printrec(l->link);
    }
}
// print elements in reversing without actually reversing the linked list using recursion
void revprint(node* l)
{
	if(l!=NULL)
	{
			revprint(l->link);
			cout<<l->data<<" ";
	}
}

// reversing uisng recursion
void revrec(node* p)
{
	if(p->link==NULL)
	{
		head=p;
		return;
	}
	revrec(p->link);
	p->link->link=p;
	p->link=NULL;
}
// reversing the linked list using iteration
void reviter(){
	node *prev=NULL;
	node *curr=head;
	node* next;
	while(curr!=NULL)
	{
	  next=curr->link;
	  curr->link=prev;
	  prev=curr;
	  curr=next;	
	}
	head=prev;
}
//traverselinked list(used in other functions)
node* go(int n=-1)
{
	node* temp=head;
	if(n==-1)
	{	
		while(temp->link!=NULL)
		{
		  temp=temp->link;
		}
	}
	else{
		for(int i=0;i<n-1;i++)
		{
			temp=temp->link;
		}
	}
	return temp;
}

//insert at begining
void iatbeg(int num)
{
	node* temp=new node();
	temp->data=num;
	temp->link=head;
	head=temp;
}

//delete at specified position
void delatn(int n)
{
	node * del;
	if(n==0)
	{
		del=head;
		head=head->link;
	}
	else{
	   node* temp =go(n);
       del=temp->link;
   	   temp->link=del->link;
	}

	delete(del);
}

//insert at specific position
void iatpos(int x, int n)
{
	if(n!=0)
	{
	node* temp=new node();
	node *prev;
	prev=go(n);
	temp->link=prev->link;
	prev->link=temp;
	temp->data=x;
	}
	else{
		iatbeg(x);
	}	
}
//insert at ending
void iatend(int x){
	node* temp=new node();
	node*end;
	end=go(-1);
	temp->link=NULL;
	end->link=temp;
	temp->data=x;
}


//print elements of list

void printlist(){
	node *temp=head;
	
	if(temp!=NULL)
	{
		cout<<endl<<"list has"<<endl;
		while(temp!=NULL)
    	{
    	cout<<temp->data<<" ";
		temp=temp->link;
	    }
	}
	else{
		cout<<"list is empty"<<endl;
	}

}


int main(){
	head=NULL;
	iatbeg(1);
	iatbeg(2);
	iatbeg(3);
	iatbeg(4);
	printlist();
	cout<<endl;
	revrec(head);
	printlist();
	
}
