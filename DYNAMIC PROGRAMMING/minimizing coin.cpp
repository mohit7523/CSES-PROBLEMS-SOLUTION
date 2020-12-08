#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,x;
	cin>>n>>x;
	int a[n];
	for(ll i=0; i<n; i++)
	cin>>a[i];
	vector<ll>dp(x+1,INT_MAX);
	dp[0]=0;
	for(ll i=1; i<=x; i++)
	{
		for(ll j=0; j<n; j++)
		{
			if(i<a[j])
			continue;

			dp[i]=min(dp[i],1+dp[i-a[j]]);
		}
	}
	if(dp[x]==INT_MAX)
	cout<<-1;
	else
	cout<<dp[x];
}
