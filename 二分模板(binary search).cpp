#include<bits/stdc++.h>
using namespace std;
在t main()
{
	在t a;
	cin>>a;
	在t l=1，r=1e9;
	while(l<r)
	{
		在t mid=(l+r)/2;
		if(mid<a) l=mid+1;
		else r=mid;
	}
	cout<<l<<endl;
}
