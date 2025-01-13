#include<bits/stdc++.h>
using namespace std;
struct point{
	double x,y;
};
double crossproduct(point a,point b)
{
	return a.x*b.y-a.y*b.x;
}
double area(point v[],int n)
{
	double sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=crossproduct(v[i],v[(i+1)%n]);
	}
	return abs(sum/2);
}
int main(){
	int n;
	cout<<"enter no of vertices :";
	cin>>n;
	point v[n];
	cout<<"enter x & y for all points\n";
	for(int i=0;i<n;i++)
	{
		cin>>v[i].x;
		cin>>v[i].y;;
	}
	cout<<area(v,n);
	return 0;
}
