#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char str[400],stack[400];
		int size=0,i;
		scanf("%s",str);
		for(i=0;i<strlen(str);i++){
			int val=str[i];
			int flag=0;
			if(val>=65&&val<=90){
				printf("%c",str[i]);
				flag=1;
			}
			if(val>=97&&val<=122){
				printf("%c",str[i]);
				flag=1;
			}
			if(val>=48&&val<=57){
				printf("%c",str[i]);
				flag=1;
			}
			if(str[i]==')'){
					printf("%c",stack[size-1]);
					flag=1;
					size--;
			}
			if(str[i]=='(')
				flag=1;
			if(flag==0){
				stack[size]=str[i];
				size++;
			}
		}
		printf("\n");
	}
	return 0;
}