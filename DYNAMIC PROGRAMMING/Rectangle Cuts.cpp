#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,b) for(int i=a;i<=b; i++)
#define vc vector<int>
#define pb push_back
#define I INT_MAX
#define pr pair<int,int>
#define ff first
#define ss second
#define mod 1000000007
int main()
{
	int a,b;
	cin>>a>>b;
	vector<vector<int>>dp(a+1,vector<int>(b+1,I));
	f(i,0,a)
	{
		f(j,0,b)
		{
			if(i==j)
			dp[i][j]=0;
			else
			{
				f(k,1,i-1)
				dp[i][j]=min(dp[i][j],1+dp[k][j]+dp[i-k][j]);
			}
			f(k,1,j-1)
			dp[i][j]=min(dp[i][j],1+dp[i][k]+dp[i][j-k]);
		}
	}
	cout<<dp[a][b];
}
