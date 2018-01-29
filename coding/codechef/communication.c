#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d", &n);
	while(n--){
		int distance,cor[3][2],count=0;
		scanf("%d", &distance);
		distance=distance*distance;
		for(i=0;i<3;i++)
			for(j=0;j<2;j++)
				scanf("%d", &cor[i][j]);
		int d1=((cor[0][0]-cor[1][0])*(cor[0][0]-cor[1][0]))+((cor[0][1]-cor[1][1])*(cor[0][1]-cor[1][1]));
		int d2=((cor[0][0]-cor[2][0])*(cor[0][0]-cor[2][0]))+((cor[0][1]-cor[2][1])*(cor[0][1]-cor[2][1]));
		int d3=((cor[2][0]-cor[1][0])*(cor[2][0]-cor[1][0]))+((cor[2][1]-cor[1][1])*(cor[2][1]-cor[1][1]));
		if(d1>distance)
			count++;
		if(d2>distance)
			count++;
		if (d3>distance)
			count++;
		if(count>=2)
			printf("no\n");
		else
			printf("yes\n");
	}
	return 0;
}