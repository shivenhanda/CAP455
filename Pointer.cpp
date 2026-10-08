#include<iostream>
using namespace std;

int main(){
	//wild pointer
	int *ptr;
	
	//null pointer
	ptr=NULL;
	
	//void pointer
	int x=10;
	void *pointer=&x;
	cout<<*(int*)pointer<<endl;
	
	//dangling pointer
	int* pointer1=new int(20);
	delete pointer1;
	cout<<*pointer1;
	return 0;
}
