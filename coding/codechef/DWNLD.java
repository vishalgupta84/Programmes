import java.util.*;
class DWNLD{
	public static void main(String[] args) {
		int tc,n,k;
		Scanner read=new Scanner(System.in);
		tc=read.nextInt();
		while(tc>0){
			tc--;
			n=read.nextInt();
			k=read.nextInt();
			int[] d=new int[n];
			int[] t=new int[n];
			for (int i=0;i<n ;i++ ) {
				t[i]=read.nextInt();
				d[i]=read.nextInt();
			}
			int sum=0;
			for (int i=0;i<n ;i++ ) {
				sum=sum+(t[i]*d[i]);
			}
			int lost=0,i=0;
			while(k>0){
				if(t[i]<=k){
					k-=t[i];
					lost=lost+(t[i]*d[i]);
				}
				else{
					lost=lost+(k*d[i]);
					k=0;
				}
				i++;
			}
			System.out.println((sum-lost));
		}
	}
}