#include<iostream>
using namespace std;


int main(){
	float sum(float,float);
	int sum(int,int);
	cout<<sum(10,20)<<endl;
	cout<<sum(10.5f,13.6f);
}
int sum(int a,int b){
	return a+b;
}
float sum(float a,float b){
	return a+b;
}
