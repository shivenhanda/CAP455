#include<iostream>
using namespace std;

class Student{
	int *marks;
	public:
		Student(int *m){
			marks=m;
		}
		void getMarks(){
			cout<<" "<<*marks;
		}
};
int main(){
	int x=99;
	Student s1(&x);
	s1.getMarks();
	int y=85;
	Student s2(&y);
	s2.getMarks();
	
	//void pointer
	void *ptr=&x;
	cout<<*(int*)(ptr);
	return 0;
}
