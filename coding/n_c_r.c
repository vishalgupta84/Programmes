#include<stdio.h>
long long unsigned int n_c_r(int n,int r){
	int i;
	long long unsigned int full=1,half=1,other=1;
	for(i=2;i<=n;i++){
		full=full*i;
		if(i<=r){
			half=half*i;
		}

		if(i<=(n-r)){
			other=other*i;
		}
		if(full%half==0){
			full=full/half;
			half=1;
		}
		if (full%other==0)
		{
			/* code */
			full=full/other;
			other=1;
		}
	}
	return full;
}
int main(){
	int n,r;
	scanf("%d%d", &n, &r);
	long long unsigned int ans=n_c_r(n,r);
	printf("ans is %llu\n",ans );
}