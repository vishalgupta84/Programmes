#include<stdio.h>
long long unsigned int cal(int n){
	long long unsigned int count[n+1];
	int i;
	count[0]=1;
	count[1]=0;
	for ( i = 2; i < n; ++i)
	{
		count[i]=(i+1)*(count[i-1]+count[i-2]);
		/* code */
	}
	return count[n];
}
int main(int argc, char const *argv[])
{
	int n;
	printf("enter number\n");
	scanf("%d", &n);
	long long unsigned int res=cal(n);
	printf("result is %llu\n",res );
	printf("time compelxity is (O(n))\nAnd space compelxity is (O(n))\n");
	return 0;
}