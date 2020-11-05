#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
bool chk(int arr[],int k,int n,int val)
{
    int l=arr[0];
    int res=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]-l>=val)
        {
            res++;
            if(res==k)
                return true;
            l=arr[i];
        }
    }
    return false;
}
int bs(int arr[],int n,int k)
{
    int lo=0,hi=arr[n-1];
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(chk(arr,k,n,mid))
        {
            lo=mid+1;
        }
        else
            hi=mid-1;
    }
    return lo-1;
    
}
int main() 
{
	fast;
	int t,n,k;
	cin>>t;
	while(t-->0)
	{
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    cout<<bs(arr,n,k)<<"\n";
	}
	return 0;
}