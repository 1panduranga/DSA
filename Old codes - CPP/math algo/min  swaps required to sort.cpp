#include<bits/stdc++.h>
using namespace std;

int lilysHomework(vector<int> arr) {
map<int,int> m;
vector<int> dup(arr);
int count=0;
int count2=0;
vector<int> arr2(arr);

for(int i=0;i<arr.size();i++)
{
    m[arr[i]]=i;
}

sort(dup.begin(),dup.end());

for(int i=0;i<arr.size();i++)
{
    if(arr[i]!=dup[i])
    {
         int t=arr[i];
         arr[i]=dup[i];
         int e=m[dup[i]];
         arr[e]=t;
         m[arr[i]]=i;
         m[arr[e]]=e;
         count++;
        
    }
     
}

sort(dup.begin(),dup.end(),greater<int>());

for(int i=0;i<arr.size();i++)
{
    m[arr2[i]]=i;
}

for(int i=0;i<arr2.size();i++)
{
    if(arr2[i]!=dup[i])
     {
         int t=arr2[i];
         arr2[i]=dup[i];
         int e=m[dup[i]];
         arr2[e]=t;
         m[arr2[i]]=i;
         m[arr2[e]]=e;
         count2++;
     }
}
return (count2<count)?count2:count;
}
int main(){
	int n;
	cin>>n;
	vector<int>arr;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		arr.push_back(x);
	}
	lilysHomework(arr);
	return 0;
}


