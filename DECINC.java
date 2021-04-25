import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		if(n%4==0)
		{
		    System.out.println(n+1);
		}
		else
		{
		    System.out.println(n-1);
		}
	}
}
