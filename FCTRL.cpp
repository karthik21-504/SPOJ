#include<iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long int
ll solve(ll n)
{
    ll ans=0;
    while(n/5>0)
    {
        ans+=n/5;
        n=n/5;
    }
    return ans;
}
int main() 
{
	fast;
	int t;
	cin>>t;
	while(t-->0)
	{
	    ll n;
	    cin>>n;
	    cout<<solve(n)<<"\n";
	}
	return 0;
}