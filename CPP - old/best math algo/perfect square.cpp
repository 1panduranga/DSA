#include<bits/stdc++.h>
using namespace std;

void findperfectsquare(int x,int y)
{
	int n=floor(sqrt(y))-ceil(sqrt(x))+1;
	cout<<n;
}
int main(){
	int x,y;
	cout<<"enter two numbers to find no of perfect squares between them : ";
	cin>>x>>y;
	findperfectsquare(1,10000);
}
