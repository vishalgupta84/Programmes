#include<stdio.h>
int main(){
	int i,j;
	for(i=11;i<100;i++){
		for(j=i+1;j<100;j++){
			float a=0;
			int w=i%10;
			int x=i/10;
			int y=j%10;
			int z=j/10;
			float o=(float)i/(float)j;
			if(w==y){
				a=(float)x/(float)z;
				//printf("%d %d\n",w,y );
			}
			if(w==z){
				a=(float)x/(float)y;
				//printf("%d %d\n",w,z );
			}
			if(x==y){
				a=(float)w/(float)z;
				//printf("%d %d\n",x,y );
			}
			if(x==z){
				a=(float)w/(float)y;
				//printf("%d %d\n",x,z );
			}
			if(a==o)
				printf("%d %d %f %f \n",i,j,a,o );
		}
	}
	return 0;
}