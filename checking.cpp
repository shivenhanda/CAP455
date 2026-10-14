#include<iostream>
using namespace std;
int main(){
	int x=10;
	int& y=x;
	y=30;
	cout<<x;
	x=20;
	cout<<y;
	return 0;
}
