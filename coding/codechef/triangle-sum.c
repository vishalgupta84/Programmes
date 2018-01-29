#include<stdio.h>
#include<stdlib.h>
int main(){
	int t,i,j;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int *arr[n];
		for(i=0;i<n;i++){
			arr[i]=(int *)malloc(sizeof(int)*(i+1));
		}
		for(i=0;i<n;i++){
			for(j=0;j<=i;j++){
				scanf("%d", &arr[i][j]);
			}
		}
		for(i=n-1;i>0;i--){
			for(j=0;j<i;j++){
				int sum1=arr[i][j]+arr[i-1][j];
				int sum2=arr[i][j+1]+arr[i-1][j];
				int max=sum1>sum2?sum1:sum2;
				arr[i-1][j]=max;
			}
		}
		printf("%d\n",arr[0][0]);
	}
	return 0;
}