#include<bits/stdc++.h>
using namespace std;
void findpf(int x)
{
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			while(x%i==0)
			{
				cout<<i<<" ";
				x=x/i;
			}
		}
	}
	if(x!=1)
	 cout<<x;
}
int main()
{
	int x;
	cin>>x;
	findpf(x);
	return 0;
}
