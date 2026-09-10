#include<iostream>
#include<math.h>
using namespace std;
int area(int a,int b){
	return a*b;
}
int main(){
	int L,B,area1,area2;
	cout<<"Enter the first Square Length and Breadth:";
	cin>>L>>B;
	area1=area(L,B);
	cout<<"Enter the second Square Length and Breadth:";
	cin>>L>>B;
	area2=area(L,B);
	cout<<"Area of first Rectangle:"<<area1<<endl;
	cout<<"Area of second Rectangle:"<<area2<<endl;
	int Difference=abs(area1-area2);
	cout<<"Difference:"<<Difference;
	return 0;
}
