#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,b) for(int i=a;i<=b; i++)
#define vi vector<int>
#define pb push_back
#define pr pair<int,int>
#define ff first
#define ss second
#define mod 1000000007
int main()
{
	int n;
	cin>>n;
	set<int>s;
    while(n--)
    {
    	int x;
    	cin>>x;
    	if(s.size()==0)
    	{
    		s.insert(x);
    		continue;
		}
		else
		{
			vi t;
			for(auto i=s.begin(); i!=s.end(); ++i){
			t.pb(*i+x);
		}
			for(int i=0; i<t.size(); i++)
			s.insert(t[i]);
			s.insert(x);
		}
	}
	cout<<s.size()<<endl;
	for(auto i=s.begin(); i!=s.end(); ++i)
	cout<<*i<<" ";
}
