#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

void checkpara(char *c,int n)
{
	stack<char> s;
	for(int i=0;i<n;i++)
	{
		char x=c[i];
		int b=1;
		if(x=='{' || x=='[' || x=='(')
		{
			s.push(x);
		}
		else if(x=='}' || x==']' || x==')')
		{
			if(s.empty())//means that there is no opening to the closing bracket
			{
			b=0;	
			}
			else{
				char y=s.top();
				switch(x){
				case '}':
				{
					if(y!='{')
						b=0;
					break;
				}
				case ']':
				{
					if(y!='[')
						b=0;
					break;
				}
				case ')':
				{
					if(y!='(')
						b=0;
					break;
				}
			}
			}
			
			if(b==0)
			{cout<<" wrong expression, paranthesis not matched"<<endl;
			return;
			}
			s.pop();
		}
		
	}
	if(s.empty())
	{
	  	cout<<"correct expression, paranthesis matched"<<endl;	
	}
	else{             // we have extra opening bracket
		cout<<"wrong got you at end";
	}
}

int main(){
	char exp[20]="(a)+b()(){}[{}[]";
	checkpara(exp,strlen(exp));
}
