
//O(n2) stable

#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
	for(int i=n-2;i>=0;i--)
	{
		for(int j=0;j<=i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main(){
	int arr[]={2,4,5,1,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	 cout<<arr[i]<<" ";
	cout<<endl;
	bubblesort(arr,n);
	for(int i=0;i<n;i++)
	 cout<<arr[i]<<" ";	
	return 0;
}
