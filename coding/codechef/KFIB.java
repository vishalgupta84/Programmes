import java.util.*;
class KFIB{
	public static void main(String[] args) {
		Scanner reader=new Scanner(System.in);
		// int t=reader.nextInt();
		// while((t--)>0){
		int n=reader.nextInt();
		int k=reader.nextInt();
		long [] table=new long[n];
		if(n<=k){
			System.out.println("1");
		}
		else{
			for (int i=0;i<k;i++ ) {
				table[i]=1;
			}
			for (int i=k;i<n;i++ ) {
				long sum=0;
				int sz=k;
				while(sz>0){
					sum=(sum+(table[i-sz]))%1000000007;
					sz--;
				}
				table[i]=sum;
			}
			System.out.println(table[n-1]);
		}
	}
}
