import java.util.*;
import java.lang.*;
import java.io.*;
class CANDY123{
	public static void main(String[] args) {
		int t,a,b;
		Scanner reader=new Scanner(System.in);
		t=reader.nextInt();
		while(t>0){
			t--;
			a=reader.nextInt();
			b=reader.nextInt();
			int f=1,s=2;
			while(true){
				a=a-f;
				if(a<0){
					System.out.println("Bob");
					break;
				}
				b=b-s;
				if(b<0){
					System.out.println("Limak");
					break;
				}
				f+=2;
				s+=2;
			}
		}
	}
}