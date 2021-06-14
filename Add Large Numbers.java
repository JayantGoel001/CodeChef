import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

class Codechef{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t!=0){
		    BigInteger A = sc.nextBigInteger();
		    BigInteger B = sc.nextBigInteger();
		    System.out.println(A.add(B));
		    t--;
		}
	}
}
