#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[105];
	int n;
	cin>>n;
	n=min(n,103); //防止越界
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i]>a[j]) //greater
			{
				swap(a[i],a[j]);
			}
			//less
			/*
			if(a[i]<a[j]) 
			{
				swap(a[i],a[j]);
			}
			*/
		}
	}
}
