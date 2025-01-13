#include<iostream>
using namespace std;
void countingsort(int a[],int n)
{
	int newarr[n];
	int c[10]={0};
	for(int i=0;i<n;i++)
	 c[a[i]]++;
	for(int i=1;i<10;i++)
	 c[i]+=c[i-1];
	 
	 cout<<endl;
	 for(int i=0;i<10;i++)
	  cout<<c[i]<<" ";
	cout<<endl;
    for(int i=0;i<n;i++)
     newarr[--c[a[i]]]=a[i];
     
    for(int i=0;i<n;i++)
     a[i]=newarr[i];
     
	 	 
}
int main(){
	int a[]={2,4,3,5,7,8,1,9,6,0,4,3,6,5,8,1};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	 cout<<a[i]<<" ";
	cout<<endl;
	countingsort(a,n);
	cout<<endl;
	for(int i=0;i<n;i++)
	 cout<<a[i]<<" ";
	return 0;
}
