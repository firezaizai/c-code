#include<bits/stdc++.h>
using namespace std;
long long f(int num) //求和函数(summation function)
{
	if(num==1) return 1;
	else return f(num-1)+num;
}
int main()
{
	int n;
	cin>>n;
	cout<<f(n);
}
