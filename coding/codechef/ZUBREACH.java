import java.util.*;
class ZUBREACH {
	public static void main(String[] args) {
		int t,m,n,rx,ry,len;
		String ss;
		Scanner read= new Scanner(System.in);
		t=read.nextInt();
		for(int k=1;k<=t;k++){
			int x=0,y=0;
			m=read.nextInt();
			n=read.nextInt();
			rx=read.nextInt();
			ry=read.nextInt();
			len=read.nextInt();
			ss=read.next();
			for (int i=0;i<len;i++ ) {
				if(ss.charAt(i)=='U')
					y++;
				if(ss.charAt(i)=='D')
					y--;
				if(ss.charAt(i)=='L')
					x--;
				if(ss.charAt(i)=='R')
					x++;
			}
			if(x==rx&&y==ry)
				System.out.println("Case "+k+": "+"REACHED");
			else if(x<0||x>m||y<0||y>n)
				System.out.println("Case "+k+": "+"DANGER");
			else
				System.out.println("Case "+k+": "+"SOMEWHERE");
		}
	}
}