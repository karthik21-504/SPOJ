import java.util.*;
import java.math.*;
import java.io.*;
class Main
{
	public static void main (String[] args) throws IOException
	{
	    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	    BufferedWriter bw=new BufferedWriter(new OutputStreamWriter(System.out));
	    int t=Integer.parseInt(br.readLine());
	    while(t-->0)
	    {
	        int n=Integer.parseInt(br.readLine());
	        int val=n*8;
	        int x=((int)Math.sqrt(1+val)-1)/2;
	        val=(x*(x+1))/2;
	        val=n-val;
	        x++;
	        if(val==0)
	        {
	            x--;
	            val=x;
	        }
	        if(x%2==0)
	            bw.write("TERM "+n+" IS "+val+"/"+(x-val+1)+"\n");
	        else
	            bw.write("TERM "+n+" IS "+(x-val+1)+"/"+val+"\n");
	    }
	    bw.flush();
	}
} 