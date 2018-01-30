#include<iostream>
#include <vector>
using namespace std;
class MOVIEWKN
{
	int size;
	std::vector<int> L;
	std::vector<int> R;
public:
	MOVIEWKN(){};
	// ~MOVIEWKN();
	void getData();
	int calculate();
};
void MOVIEWKN::getData(){
	cin >> size;
	L.resize(size);
	R.resize(size);
	for (int i = 0; i < size; ++i){
		cin >> L[i];
	}
	// cout << size <<endl;
	for (int i = 0; i < size; ++i){
		cin >> R[i];
	}
}
int MOVIEWKN::calculate(){
	// std::vector<int> m;
	int m=0,index=-1,prod,Rmax=0,Lmax=0;
	for (int i = 0; i < size; ++i){
		prod= L[i]*R[i];
		if(prod>m){
			m=prod;
			index=(i);
			Rmax=R[i];
			Lmax=L[i];
		}
		if(prod==m){
			if(R[i]>Rmax){
				m=prod;
				index=(i);
				Rmax=R[i];
				Lmax=L[i];	
			}
			else if(index>i){
				m=prod;
				index=(i);
				Rmax=R[i];
				Lmax=L[i];
			}
		}
	}
	return (index+1);
}
int main()
{
	int t;
	cin >> t;
	MOVIEWKN object;//= new MOVIEWKN();
	while(t--){
		object.getData();
		int res=object.calculate();
		cout << res << endl;
	}

	return 0;
}