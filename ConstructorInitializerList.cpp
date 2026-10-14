#include<iostream>
using namespace std;
class Student{
//	const int id;
	int &marks;//reference 
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
