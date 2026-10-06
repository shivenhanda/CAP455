#include<iostream>
using namespace std;
class Sum{
	int num1;
	int num2;
	public:
		Sum(int f,int s){
			this->num1=f;
			this->num2=s;
		}
		int add(int num1,int num2){
			return num1+num2;
		}
		void display(){
			cout<<"\n Number 1:"<<num1;
			cout<<"\n Number 2:"<<num2;
			cout<<"\n Sum:"<<add(num1,num2);
		}
};
int main(){
	Sum num(10,20);
	num.display();
}
