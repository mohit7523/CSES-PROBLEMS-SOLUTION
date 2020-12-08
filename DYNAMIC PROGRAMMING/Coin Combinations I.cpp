#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
	int n;
	ll x;
	cin>>n>>x;
	ll a[n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	vector<ll>dp(x+1,0);
	dp[0]=1;
	for(ll i=1; i<=x; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[j]>i)
			continue;
				dp[i]=(dp[i]+dp[i-a[j]])%mod;
		}
	}
	cout<<dp[x]%mod;
}
