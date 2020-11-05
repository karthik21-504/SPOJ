#include <iostream>
using namespace std;
#define MAX 999999999
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int ox[1024],ni[1024],wt[1024];
int dp[1024][22][80];
int solve(int n,int O,int N)
{
    if(dp[n][O][N]!=-1)
    {
        return dp[n][O][N];
    }
    if(O==0&&N==0)
    {
        dp[n][O][N]=0;
    }
    else if(n==0){
        dp[n][O][N]=MAX;
    }
    else{
        dp[n][O][N]=min(solve(n-1,O,N),solve(n-1,max(O-ox[n-1],0),max(N-ni[n-1],0))+wt[n-1]);
    }
    return dp[n][O][N];
}
int main()
{
	fast;
	int t;
	cin>>t;
	while(t-->0)
	{
	    int O,N,n;
	    cin>>O>>N>>n;
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=0;j<=O;j++)
	        {
	            for(int k=0;k<=N;k++)
	            {
	                dp[i][j][k]=-1;
	            }
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>ox[i]>>ni[i]>>wt[i];
	    }
	    cout<<solve(n,O,N)<<"\n";
	}
	return 0;
} 