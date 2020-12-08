#include<bits/stdc++.h>
using namespace std;
int digit(int n)
{
	int mx=0,r;
	while(n>0)
	{
		r=n%10;
		mx=max(r,mx);
		n/=10;
	}
	return mx;
}
int main()
{
	int n;
	cin>>n;
	int cnt=0;
   while(n>0)
   {
   	int p=digit(n);
   	n=n-p;
   	cnt++;
   }
   cout<<cnt;
}

