#include <iostream>
#include <cstring>
using namespace std;
typedef long long int lli;
lli dp[1005][1024];
const int hi=100000007;
int main() 
{
    int t;
    int a[1001];
    bool b[1025];
    cin>>t;
    for(int s=1;s<=t;s++)
    {
        int n,m;
        cin>>n>>m;
        memset(dp,0,sizeof(dp));
        memset(b,false,sizeof(b));
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            int val;
            cin>>val;
            b[val]=true;
        }
        dp[0][0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<1024;j++)
            {
                dp[i][j]=(dp[i-1][j]+dp[i-1][j^a[i-1]])%hi;
            }
            
        }
        lli ans=0;
        for(int i=0;i<1024;i++)
        {
            if(!b[i])
            {
                ans=(ans+dp[n][i])%hi;
            }
        }
        cout<<"Case "<<s<<": "<<ans<<"\n";
    }
	return 0;
} 