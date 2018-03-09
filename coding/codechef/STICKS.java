import java.util.*;
class STICKS {
	public static void main(String[] args) {
		int t;
		Scanner read= new Scanner(System.in);
		t=read.nextInt();
		while(t>0){
			t--;
			int n=read.nextInt();
			int[] length=new int[n];
			for (int i=0;i<n ;i++ ) {
				length[i]=read.nextInt();
			}
			// int mx=length[0];
			// for (int i=1;i<mx ;i++ ) {
			// 	if(mx<length[i])
			// 		mx=length[i];
			// }
			// int[] occur=new int[mx+1];
			// for (int i=0;i<=mx ;i++ ) {
			// 	occur[i]=0;
			// }
			// for (int i=0;i<n ;i++ ) {
			// 	occur[length[i]]++;
			// }
			// int l=-1,r=-1,c=0;
			// for (int i=mx;i>=0 ;i-- ) {
			// 	if(occur[i]>=2){

			// 	}
			// }
			Arrays.sort(length);
			
		}
	}
}