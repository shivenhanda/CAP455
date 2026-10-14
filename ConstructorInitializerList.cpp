#include<iostream>
using namespace std;
class Student{
	int &marks;
	public:
		Student(int x):marks(x){
		}
		void display(){
			cout<<marks<<endl;
		}
};
int main(){
	Student std1(100);
	std1.display();
	return 0;
}
