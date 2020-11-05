import java.util.*;
import java.io.*;
 
class Main
{
	public static boolean isPr(int n)
	{
		if(n<=1)
			return false;
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
				return false;
		}
	return true;
	}
	public static void main (String[] args) throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw=new BufferedWriter(new OutputStreamWriter(System.out));
		int t=Integer.parseInt(br.readLine());
		while(t-->0)
		{
			StringTokenizer s=new StringTokenizer(br.readLine());
			int x=Integer.parseInt(s.nextToken());
			int y=Integer.parseInt(s.nextToken());
			for(int i=x;i<=y;i++)
			{
				if(isPr(i)==true)
					bw.write(i+"\n");
			}
			bw.write("\n");
		}
		bw.flush();
	}
} 