import java.util.*;
import java.lang.*;
import java.io.*;
public class ALTARAY{
	public static void main(String[] args) {
		int t,n;
		Scanner reader = new Scanner(System.in);
		// System.out.println("enter an integer");
		t = reader.nextInt();
		while(t>0){
			n=reader.nextInt();
			int[] num= new int[n];
			int[] output=new int[n];
			for (int i=0;i<n ;i++ ) {
				num[i]=reader.nextInt();
			}
			Boolean sign;
			if(num[n-1]<0)
				sign=false;
			else
				sign=true;
			output[n-1]=1;
			for (int i=n-2;i>=0 ;i-- ) {
				Boolean tmp;
				if(num[i]<0)
					tmp=false;
				else
					tmp=true;
				if(sign==tmp)
					output[i]=1;
				else
					output[i]=output[i+1]+1;
				sign=tmp;
			}
			for (int i=0;i<n ;i++) {
				System.out.print(output[i]+" ");
			}
			System.out.println();
			t--;
		}
	}
}