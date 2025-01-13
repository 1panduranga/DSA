#include<bits/stdc++.h>
using namespace std;
struct point{
	double x,y;
};
double crossproduct(point a,point b)
{
	return a.x*b.y -b.x*a.y;
}
void finddirection(point a,point b,point p)
{
	b.x-=a.x;
	b.y-=a.y;
	p.x-=a.x;
	p.y-=a.y;
	double res;
	res=crossproduct(b,p);
	if(res<0)
	 cout<<"Turn right";
	else if(res>0)
	 cout<<"Turn left";
	 else
	 cout<<"Keep going";
}
int main(){
	point a,b,p;
	cout<<"enter the two points in start to end direction \n";
	cin>>a.x>>a.y>>b.x>>b.y;
	cout<<"enter a point to find the direction\n";
	cin>>p.x>>p.y;
	finddirection(a,b,p);
	return 0;
}
