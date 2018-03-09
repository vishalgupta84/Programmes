import java.util.*;
class GIT01{
	public static void main(String[] args) {
		int t;
		Scanner read= new Scanner(System.in);
		t=read.nextInt();
		while((t--)>0){
			int n=read.nextInt();
			int m=read.nextInt();
			String[] mat=new String[n];
			String[] first=new String[n];
			String[] second=new String[n];
			for (int i=0;i<n;i++){
				mat[i]=read.next();
			}
			for (int i=0;i<n ;i++ ) {
				String temp="";
				for (int j=0;j<m ;j++ ) {
					if((i+j)%2==0)
						temp=temp+"R";
					else
						temp=temp+"G";
				}
				first[i]=temp;
			}
			for (int i=0;i<n ;i++ ) {
				String temp="";
				for (int j=0;j<m ;j++ ) {
					if((i+j)%2==1)
						temp=temp+"R";
					else
						temp=temp+"G";
				}
				second[i]=temp;
			}
			int d1=0,d2=0;
			for (int i=0;i<n ;i++){
				for (int j=0;j<m;j++){
					if(mat[i].charAt(j)!=first[i].charAt(j)){
						if(mat[i].charAt(j)=='R')
							d1+=5;
						else
							d1+=3;
					}
					if(mat[i].charAt(j)!=second[i].charAt(j)){
						if(mat[i].charAt(j)=='R')
							d2+=5;
						else
							d2+=3;
					}		
				}				
			}
			if(d1<d2)
				System.out.println(d1);
			else
				System.out.println(d2);			
		}
	}
}