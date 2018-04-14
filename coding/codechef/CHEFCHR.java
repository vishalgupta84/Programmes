import java.util.*;
class CHEFCHR {
	public static void main(String[] args) {
		int t,len;
		String ss;
		Scanner read= new Scanner(System.in);
		t=read.nextInt();
		while(t>0){
			t--;
			ss=read.next();
			len=ss.length();
			Boolean lovely=false;
			int num=0;
			for (int i=0;(i+4)<len;i++ ) {
				Boolean c=false,h=false,e=false,f=false;
				if(ss.charAt(i)=='c')
					c=true;
				if(ss.charAt(i+1)=='h')
					h=true;
				if(ss.charAt(i+2)=='e')
					e=true;
				if(ss.charAt(i+3)=='f')
					f=true;
				if(c&&h&&e&&f){
					num++;
					lovely=true;
				}
			}
			if(lovely)
				System.out.println("lovely "+num);
			else
				System.out.println("normal");
		}
	}
}