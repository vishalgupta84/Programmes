#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int array[15],i,len;
    cin >> len;
	for (i = 0; i <len; ++i)
	{
		cin >> array[i];
	}
	long long unsigned int sum=0,current_sum=0,index_l=0,index_h=0,idx_x,idx_y;
	for(i=0;i<len;i++){
		if(array[i]>=0){
			current_sum+=array[i];
			index_h=i;
			if (current_sum>=sum)
			{
				/* code */
				sum=current_sum;
				idx_x=index_l;
				idx_y=index_h;
			}
			else if (sum==current_sum)
			{
				/* code */
				int diff=(index_h-index_l)>(idx_y-idx_x);
				if(diff>0){
					sum=current_sum;
					idx_y=index_h;
					idx_x=index_l;
				}
			}
		}
		else{
			current_sum=0;
			index_l=i+1;
		}
	}
	cout << sum << " " << idx_x  << " "<< idx_y << "\n";
}
	