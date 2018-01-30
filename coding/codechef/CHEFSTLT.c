#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char x[101],y[101];
		scanf("%s",x);
		scanf("%s",y);
		int c1=0,c2=0;
		int len=strlen(x),i;
		for(i=0;i<len;i++){
			if(x[i]=='?'||y[i]=='?')
				c1++;
			else if(x[i]!=y[i])
				c2++;
		}
		printf("%d %d\n",c2,c2+c1);
	}
	return 0;
}