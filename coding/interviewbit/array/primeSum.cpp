#include<bits/stdc++.h>
using namespace std;
class primeSum {
private:
  /* data */
    int number;
    bool isPrime(int number);
public:
  primeSum (int num){
    number=num;
  };
  //virtual ~primeSum ();
  std::vector<int> generate();
};
bool primeSum::isPrime(int number){
  for (size_t i = 2; i < number; i++) {
    /* code */
    if(!number%i)
      return false;
  }
  return true;
}
std::vector<int> primeSum::generate(){
  int first=2;
  int last=number-2;
  std::vector<int> result;
  while (first<=last) {
    /* code */
    if(isPrime(first)&&isPrime(last)){
      result.push_back(first);
      result.push_back(last);
      return result;
    }
    first++;
    last=number-first;
  }
}
int main(){
  int n;
  cin >> n;
  primeSum getNumbers(n);
  std::vector<int> result=getNumbers.generate();
  cout << result[0] << " "<<result[1] << endl;
  return 0;
}
