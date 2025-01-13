#include<iostream>
using namespace std;
struct node{
	int data;
	node* link;
};
class stack{
	private:
	   node* head;
	public:
		stack():head(NULL){
		}
		void pop()
		{
			if(head==NULL)
			{
				cout<<"empty satck,cannot pop"<<endl;
				return;
			}
			node *temp=head;
			head=temp->link;
			delete(temp);
		}
		void print()
		{
			node *temp=head;
			if(head==NULL)
			{
				cout<<"no elements to print"<<endl;
				return;
			}
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->link;
			}
			cout<<endl;
		}
		void push(int x){
			node* temp=new node();
			temp->data=x;
			temp->link=head;
			head=temp;
		}
	
};

int main(){
	stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.print();
	s.pop();
	s.print();
	s.pop();
	s.pop();
	s.print();
	s.pop();
}
