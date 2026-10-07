#include<iostream>
using namespace std;
double area(double r){
	double res=3.14*r*r;
	return res;
}
double area(double w,double h){
	return w*h;
}
int main(){
	double r,w,h;
	cout<<"Enter the Radius of Circle:";
	cin>>r;
	cout<<"Enter the width and height:";
	cin>>w>>h;
	cout<<area(r)<<endl;
	cout<<area(w,h)<<endl;
	return 0;
}
