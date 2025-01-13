//O{n2) stable

#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int k=a[i];
		int j=i;
		while(j>0 && a[j-1]>k)
		{
			a[j]=a[j-1];
			j--;
		}
		a[j]=k;
		for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
	    cout<<" - "<<endl;	
		}
}

int main(){
	int a[]={9,4,5,2,3,1,7,6,8};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	 cout<<a[i]<<" ";
	cout<<endl;
	insertionsort(a,n);
	for(int i=0;i<n;i++)
	 cout<<a[i]<<" ";
	return 0;
}
