#include<iostream>
using namespace std;
bool isPrime(int n,int i=2){
	return n>=2 && (i>n/i || (n%i!=0&&isPrime(n,i+1)));
}
int main(){
	cout<<boolalpha<<isPrime(121);
	return 0;
}
