#include<iostream>
using namespace std;

int main(){
	int array[4];
	cout<<"Enter the 4 Number: ";
	for(int i=0;i<4;i++){
		cin>>array[i];
	}
	cout<<"array value at position 0:"<<array[0]<<endl;
	cout<<"array value at position 1:"<<1[array]<<endl;
	cout<<"array value at position 2:"<<*(array+2)<<endl;
	cout<<"array value at position 3:"<<*(3+array)<<endl;
	return 0;
}
