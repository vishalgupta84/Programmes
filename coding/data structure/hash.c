#include<stdio.h>
#include<stdlib.h>
int direct_hashing(int array[],int n,int key){
	int i,*arr;
	arr=(int *)malloc(sizeof(int)*(n+1));
	for (i = 0; i < n; ++i)
	{
		arr[i]=0;
	}
	for (i = 0; i < n; ++i)
	{
		int num=array[i];
		arr[num]=1;
	}
	if(key<=n)
		if(arr[key]==1)
			return 1;
	return 0;
}
int main()
{
	int ch;
	int key;
	printf("enter key which is to be searched\n");
	scanf("%d", &key);
	int n,i,*arr;
	printf("enter number of intergers\n");
	scanf("%d", &n);
	arr=(int *)malloc(sizeof(int)*(n));
	printf("enter intergers\n");
	for (i = 0; i < n; ++i)
	{
		/* code */
		scanf("%d", &arr[i]);
	}
	printf("enter choice to select hashing\n");
	//fflush(stdin);
	printf("1 for direct hashing\n2 for chaining\n");
	scanf("%d", &ch);
	if (ch==1)
	{
		int r=direct_hashing(arr,n,key);
		if(r)
			printf("found\n");
		else
			printf("not found\n");
		/* code */
	}
	if (ch==2)
	{
		//chaining();
		/* code */
	}
	
	return 0;
}