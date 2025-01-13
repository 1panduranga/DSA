#include<bits/stdc++.h>
using namespace std;

void findprime(int x)
{
	int arr[x]={0};
	arr[0]=arr[1]=1;
	
	for(int i=2;i<sqrt(x);i++)
	{
		if(arr[i]==0)
		{	  
		   	for(int j=2;i*j<=x;j++){
		   		arr[i*j]=1;
		    }	
		}
	}
	for(int i=2;i<=x;i++)
	{
		if(arr[i]==0)
		{
			cout<<i<<" ";
		}
	}
}
int main(){
	int x;
	cout<<"enter a number : ";
	cin>>x;
	findprime(x);
}
