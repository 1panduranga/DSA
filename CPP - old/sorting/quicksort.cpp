
//O(nlogn) but inplace...so better than merge, insertion,selection sort  & ----not stable


#include<iostream>
using namespace std;

int partition(int a[],int start,int end)
{
	int p=a[end];
	int i=start;
	for(int j=start;j<end;j++)
	{
		if(a[j]<p)
		{
			int t=a[j];
			a[j]=a[i];
			a[i]=t;
			i++;
		}
	}
			int t=a[i];
			a[i]=a[end];
			a[end]=t;
	return i;
}

void quicksort(int a[],int start,int end)
{
	if(start<end)
	{
		int pindex=partition(a,start,end);
		quicksort(a,start,pindex-1);
		quicksort(a,pindex+1,end);
	}
}
int main(){
	int a[]={5,3,4,2,6,7,1,8};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	 cout<<a[i]<<" ";
	cout<<endl;
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
	 cout<<a[i]<<" ";
}
