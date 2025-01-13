#include<bits/stdc++.h>
using namespace std;
void getfact(int x)
{
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			if(x/i!=i)
			cout<<i<<" "<<x/i<<" ";
			else
			cout<<i<<" ";
		}
	}
}
int main()
{
	int x;
	cin>>x;
	getfact(x);
	return 0;
}
