import java.util.*;
import java.math.*;
import java.io.*;
class Main
{
    public static boolean solve(long n)
    {
        if(n==0)
        return false;
        for(int i=2; i<=(Math.sqrt(n)+1); i++) 
        {
            if(n%i==0)
            {
                int ans=0;              
                while(n%i==0) 
                {
                    n=n/i;
                    ans+=1;
                }
                if(i==3||(i-3)%4==0)
                {
                    if(ans%2!=0)
                        return false;
                }
            }
        }
        if(n>1&&(n==3||(n-3)%4==0)) return false;
        return true;
    }
	public static void main (String[] args) throws IOException
	{
	    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	    BufferedWriter bw=new BufferedWriter(new OutputStreamWriter(System.out));
	    int t=Integer.parseInt(br.readLine());
	    while(t-->0)
        {
            long n=Long.parseLong(br.readLine());
            boolean flag=solve(n);
            if(flag)
                bw.write("Yes"+"\n");
            else
                bw.write("No"+"\n");
        }
	    bw.flush();
	}
}