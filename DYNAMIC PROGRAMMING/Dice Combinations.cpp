#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
#define mod 1000000007

int main(){
      //freopen("in.txt","r",stdin);
      //freopen("out.txt","w",stdout);
      int n;
      cin>>n;
      vector<int>dp(n+1,0);
      dp[0]=1,dp[1]=1;
      for(int i=2; i<=n; i++)
      {
      	for(int j=1; j<=6; j++)
      	{
      		if((i-j)<0)
      		break;
      		else
      		{
      			dp[i]=(dp[i]%mod+dp[i-j]%mod)%mod;
			  }
		  }
		  
	  }
	  cout<<dp[n];
      
  }
