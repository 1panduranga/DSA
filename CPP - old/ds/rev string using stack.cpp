#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
void rev(char c[],int n)
{
	stack<char> s;
	for(int i=0;i<n;i++)
	{
		s.push(c[i]);
	}
	for(int i=0;i<n;i++)
	{
		c[i]=s.top();
		s.pop();
	}
}
int main(){
	char c[20]="hell";
	cout<<c<<endl;
	rev(c,strlen(c));
	cout<<c;
	
}
