import java.util.*;
class TWONMS {
	static int max(int a,int b){
		// return (a<b):b?a;
		if(a<b)
			return b;
		return a;
	}
	static int min(int a,int b){
		// return (a<b):a?b;
		if(a<b)
			return a;
		return b;
	}
	public static void main(String[] args) {
		int t,a,b,n;
		Scanner read= new Scanner(System.in);
		t=read.nextInt();
		while(t>0){
			t--;
			a=read.nextInt();
			b=read.nextInt();
			n=read.nextInt();
			if(n%2!=0){
				int mx=max(a*2,b);
				int mn=min(a*2,b);
				System.out.println(mx/mn);
			}
			else{
				int mx=max(a,b);
				int mn=min(a,b);
				System.out.println(mx/mn);
			}
		}
	}
}