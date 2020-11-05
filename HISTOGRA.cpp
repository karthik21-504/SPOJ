#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long int
ll rect(ll arr[],ll n)
{
    ll area=0,marea=0;
    stack<ll> st;
    ll i=0;
    int val;
    while(i<n)
    {
        if(st.empty()||arr[st.top()]<=arr[i])
        {
            st.push(i++);
        }
        else
        {
            val=st.top();
            st.pop();
            marea=arr[val]*(st.empty()?i:i-st.top()-1);
        }
        area=max(area,marea);
    }
    while(st.empty()==false)
    {
        val=st.top();
        st.pop();
        marea=arr[val]*(st.empty()?i:i-st.top()-1);
        area=max(area,marea);
    }
    return area;
}
int main()
{
	fast;
	ll n;
	cin>>n;
	while(1==1){
	if(n>0)
	{
	   ll arr[n];
	   for(ll i=0;i<n;i++)
	   {
	        cin>>arr[i];
	   }
	   cout<<rect(arr,n)<<"\n";
	}
	else{
	        break;
	    }
	    cin>>n;
	}
	return 0;
}