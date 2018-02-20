import java.util.*;
class TTENIS{
	public static void main(String[] args) {
		int t;
		String points;
		Scanner read=new Scanner(System.in);
		t=read.nextInt();
		while(t>0){
			t--;
			points=read.next();
			int len=points.length();
			int w=0,l=0;
			for (int i=0;i<len ;i++ ) {
				if(points.charAt(i)=='1')
					w++;
				else
					l++;
				if(w==11&&l<10){
					System.out.println("WIN");
					break;
				}
				else if(l==11&&w<10){
					System.out.println("LOSE");
					break;
				}
				else if(w>=10&&l>=10&&(w-l)==2){
					System.out.println("WIN");
					break;
				}
				else if(w>=10&&l>=10&&(l-w)==2){
					System.out.println("LOSE");
					break;
				}
			}
		}
	}
}