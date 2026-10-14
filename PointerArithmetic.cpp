#include<iostream>
using namespace std;

int main(){
	//Pointer Arithmetic
	int arr[]={10,20,30};
	int *p=arr;
	(*p)++;
	cout<<*p<<" ";
	
	int *p1=arr;
	p1++;
	cout<<*p1<<" ";
	
	//Pointer to Pointer
	int **p2=&p1;
	cout<<**p2;
	return 0;
}
