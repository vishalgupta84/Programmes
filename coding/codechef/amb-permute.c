#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	scanf("%d", &n);
	while(n){
		int *arr=(int *)malloc(n*sizeof(int));
		int flag=0;
		for(i=0;i<n;i++)
			scanf("%d", &arr[i]);
		for(i=0;i<n;i++){
			if(arr[arr[i]-1]!=i+1){
				printf("not ambiguous\n");
				flag=1;
				break;
			}
		}
		if(!flag)
			printf("ambiguous\n");
		scanf("%d", &n);
	}
	return 0;
}