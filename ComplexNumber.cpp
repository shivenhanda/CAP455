#include<iostream>
using namespace std;
class Complex{
	public:
		int real;
		int imag;
		Complex(int r,int i){
			real=r;
			imag=i;
		}
		Complex operator+(Complex o){
			return Complex(real+o.real,imag+o.imag);
		}
};
int main(){
	Complex c1(4,3);
	Complex c2(5,4);
	Complex c3=c1+c2;
	cout<<c3.real<<"+"<<c3.imag<<"i"<<endl;
	return 0;
}
