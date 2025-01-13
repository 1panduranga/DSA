//stable O(nlogn)

#include<iostream>
using namespace std;

void merge(int l[],int r[],int a[],int nl,int nr);
void mergesort(int a[],int n)
{
	if(n<2)
	 return;
	int mid=n/2;
	int l[mid];
	int r[n-mid];
	
	for(int i=0;i<mid;i++)
	 l[i]=a[i];
	 
	for(int i=mid,j=0;i<n;i++,j++)
	 r[j]=a[i];
	 
	mergesort(l,mid);
	mergesort(r,n-mid);
	merge(l,r,a,mid,n-mid);
}

void merge(int l[],int r[],int a[],int nl,int nr)
{
	int i=0,j=0,k=0;
	
	while(i<nl && j<nr)
	{
	  if(l[i]<r[j]){
	  	a[k]=l[i];
	  	i++;
	  	k++;
	  }	
	  else{
	  	a[k]=r[j];
	  	j++;
	  	k++;
	  }
	}
	while(i<nl){
		a[k]=l[i];
		k++;
		i++;
	}
	while(j<nr){
		a[k]=r[j];
		k++;
		j++;
	}
}
int main(){
	int a[]={3,4,2,5,1,8,7,6};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	 cout<<a[i]<<" ";
	cout<<endl;
	mergesort(a,n);
	for(int i=0;i<n;i++)
	 cout<<a[i]<<" ";
	return 0;
}
