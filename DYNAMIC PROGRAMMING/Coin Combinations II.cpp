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
    for(int j=0; j<n; j++)
    {
    	for(ll i=1; i<=x; i++)
    	{
    		if(i-a[j]>=0)
    		dp[i]=(dp[i]%mod+dp[i-a[j]]%mod)%mod;
		}
	}
	cout<<dp[x]%mod;
}
