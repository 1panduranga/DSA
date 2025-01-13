#include<bits/stdc++.h>
using namespace std;
int maxf(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return n/i;
		}
	}
}
int main(){
	vector<int> v;
	int x;
	cout<<"enter : ";
	cin>>x;
	while(1)
	{
		x=maxf(x);
		if(x<1)
		break;
		v.push_back(x);
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
		
		
	return 0;
}
