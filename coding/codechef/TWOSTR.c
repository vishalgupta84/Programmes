#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	/* code */
	int t;
	scanf("%d", &t);
	while(t--){
		char x[11],y[11];
		int i;
		scanf("%s",x);
		scanf("%s",y);
		int len=strlen(x);
		int flag=0;
		for(i=0;i<len;i++){
			if(x[i]=='?'||y[i]=='?')
				continue;
			else if(x[i]!=y[i])
			{
				printf("No\n");
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("Yes\n");
	}
	return 0;
}