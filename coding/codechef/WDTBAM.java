import java.util.*;
class WDTBAM{
	public static void main(String[] args) {
		int t,n;
		Scanner reader=new Scanner(System.in);
		t=reader.nextInt();
		while(t>0){
			t--;
			n=reader.nextInt();
			// System.out.println(n);
			String user=reader.next();
			String actual=reader.next();
			// System.out.println(user);
			int [] point=new int[n+1];
			for (int i=0;i<=n ;i++ ) {
				point[i]=reader.nextInt();
			}
			int c=0;
			for (int i=0;i<n ;i++ ) {
				if(user.charAt(i)==actual.charAt(i))
					c++;
			}
			int mx=point[0];
			// System.out.println(c);
			for (int i=1;i<=c ;i++ ) {
				if(mx<point[i])
					mx=point[i];
			}
			if(c==n)
				System.out.println(point[n-1]);
			else
				System.out.println(mx);
		}
	}
}