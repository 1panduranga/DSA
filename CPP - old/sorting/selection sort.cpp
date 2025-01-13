//O(n2) not stable as the items may swap at any position...to make it stable..insert the  min element by pusing all other elemts aside instead of swapping

#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
  int l=0;
  while(l<n-1)
  {
    int min=l;
  	for(int i=l+1;i<n;i++)
  	{
  		if(arr[i]<arr[min])
  		{
  		   min=i;	
		}
	 }
    
    int t=arr[l];
    arr[l]=arr[min];
    arr[min]=t;
	 l++;
  }
}
int main()
{
	int arr[]={3,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	 cout<<arr[i]<<" ";
	cout<<endl;
	selection_sort(arr,n);
    for(int i=0;i<n;i++)
	 cout<<arr[i]<<" ";
	return 0;
}

