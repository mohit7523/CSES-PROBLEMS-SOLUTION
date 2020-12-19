#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,b) for(int i=a;i<=b; i++)
#define mod 1000000007
int main()
{
     ll n,x;
     cin>>n>>x;
     vector<int>pr(n+1);
     vector<int>pg(n+1);
     f(i,1,n)
     cin>>pr[i]; 
     f(i,1,n)
     cin>>pg[i]; 
	 vector<vector<int>>dp(n+1,vector<int>(x+1,0));
	 f(i,1,n)  
	 {
	 	f(j,1,x)
	 	{
	 		if(pr[i]>j)
	 		dp[i][j]=dp[i-1][j];
	 		else{
	 		dp[i][j]=max(dp[i-1][j],dp[i-1][j-pr[i]]+pg[i]);
	 	}
		 }
	   }
	   cout<<dp[n][x];  
     
     return 0;

}
