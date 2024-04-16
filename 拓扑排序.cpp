#include<bits/stdc++.h>
using namespace std;
#define clear(x) memset(x,0,sizeof(x)) 
#define MAXN 10001
int d[MAXN], top[MAXN]; 
priority_queue<int,vector<int>,greater<int> > q;
vector<int> edge[10001];
void topSort(int n)
{
	int cnt=0;
	memset(d,0,sizeof d); //clear(d) 
	for(int i=1;i<=n;i++)
	{
		for(auto v:edge[i]) d[v]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(d[i]==0) q.push(i);
	}
	while(q.size()) //while(!q.empty())
	{
		auto x=q.top(); q.pop();
		top[++cnt]=x;
		for(auto v:edge[x])
		{
			--d[v];
			if(d[v]==0) q.push(v);
		}
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		edge[x].push_back(y);
		d[y]++;
	}
	topSort(n);
	for(int i=1;i<=n;i++)
	{
		cout<<top[i]<<' ';
	}
	return 0;
} 
