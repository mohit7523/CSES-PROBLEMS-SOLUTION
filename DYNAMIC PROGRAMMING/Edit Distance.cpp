#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,b) for(int i=a;i<=b; i++)
#define vc vector<int>
#define pb push_back
#define pr pair<int,int>
#define ff first
#define ss second
#define mod 1000000007
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int m=s1.size();
	int n=s2.size();
	vector<vector<int>>dp(m+1,vector<int>(n+1,0));
	dp[0][0]=0;
	f(i,1,n)
	dp[0][i]=i;
	f(i,1,m)
	dp[i][0]=i;
	f(i,1,m)
	{
		f(j,1,n)
		{
			if(s1[i-1]==s2[j-1])
			dp[i][j]=dp[i-1][j-1];
			else
			dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
		}
	}
	cout<<dp[m][n];
}
