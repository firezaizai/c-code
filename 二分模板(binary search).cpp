#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int l=1，r=1e9;
	while(l<r)
	{
		int mid=(l+r)/2;
		if(mid<a) l=mid+1;
		else r=mid;
	}
	cout<<l<<endl;
}
