#include<iostream>
using namespace std;

class Student{
	int *marks;
	public:
		Student(int &m){
			marks=&m;
		}
		void display(){
			cout<<*marks;
		}
};
int main(){
	
	int x=100;
	Student s1(x);
	s1.display();
	Student *p=&s1;
	p->display();
	return 0;
}
