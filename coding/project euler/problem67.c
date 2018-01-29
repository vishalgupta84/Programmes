#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j;
	int n,value;
	int *arr[100];
	for(i=0;i<100;i++){
		arr[i]=(int *)malloc(sizeof(int)*(i+1));
	}
	FILE *fp=fopen("triangle.txt","r");
	for (i = 0; i < 100; ++i){
		for(j=0;j<=i;j++){
			fscanf(fp,"%d", &value);
			arr[i][j]=value;
		}
	}
	for(i=99;i>0;i--){
		for(j=0;j<i;j++){
			int sum1=arr[i][j]+arr[i-1][j];
			int sum2=arr[i][j+1]+arr[i-1][j];
			int max=sum1>sum2?sum1:sum2;
			arr[i-1][j]=max;
		}
	}
	printf("%d\n",arr[0][0]);

	return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
