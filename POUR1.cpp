#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
    int gcd(int x,int y)
    {
        while(y>0)
        {
            int tmp=x%y;
            x=y;
            y=tmp;
        }
        return x;
    }
    int solve(int x,int y,int f)
    {
        int t1=x;
        int t2=0;
        int cnt=1;
        while(t1!=f&&t2!=f)
        {
            int k=min(t1,y-t2);
            t1-=k;
            t2+=k;
            cnt++;
            if(t1==f||t2==f)
                break;
            if(t1==0)
            {
                t1=x;
                cnt++;
            }
            if(t2==y)
            {
                t2=0;
                cnt++;
            }
        }
        return cnt;
    }
 
int main()
{
    fast;
    int t;
    cin>>t;
	while(t-->0)
	{
		int j1,j2,r;
		cin>>j1>>j2>>r;
		if(r>j1&&r>j2)
		    cout<<"-1"<<endl;
		else if(j1==r||j2==r)
		    cout<<"1"<<endl;
		else if((r%gcd(j1,j2))!=0)
		    cout<<"-1"<<endl;
		else
	        cout<<min(solve(j1,j2,r),solve(j2,j1,r))<<endl;
	}
    return 0;
}