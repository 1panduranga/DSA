#include<iostream>
using namespace std;
class stack{
	private:
		int a[2];
		int top;
	public:
		stack():top(-1){
		}
		void push(int x){
			if(top==1)
			{
				cout<<"cannot insert"<<endl;
				print();
				return;
			}
			a[++top]=x;
			print();
		}
		int pop()
		{
			if(top==-1)
			{
				cout<<"no elements to pop"<<endl;
				print();
				return NULL;
			}
			int v=a[top--];
			print();
			return v;
		}
		bool isEmpty()
		{
			if(top==-1)
			{
				return true;
			}
			else{
				return false;
			}
		}
		void print()
		{
			if(top==-1)
			{
				cout<<"empty stack";
				return;
			}
			cout<<"stack:  ";
			for(int i=0;i<=top;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
};
int main(){
	stack a1;
	a1.push(1);
	a1.push(2);
	a1.push(3);
	a1.print();
	a1.pop();
	a1.pop();
	a1.pop();
	a1.print();
	
}
