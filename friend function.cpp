#include<iostream>
#include<string>
using namespace std;

class Student{
	private:
		int marks;
	public:
		static int count;
		Student(int m){
			marks=m;
			count++;
		}
		friend void display(Student s);
		friend class Teacher;
};
int Student::count=0;
void display(Student s){
	cout<<s.marks<<endl;
}
class Teacher{
	public:
		static string teacher;
		void display(Student s){
			cout<<"Teacher:"<<teacher<<endl;
			cout<<"Student Marks:"<<s.marks<<endl;
		}
};
string Teacher::teacher="Shiven";
int main(){
	Student s1(100);
	Student s2(98);
	Student s3(99);
	display(s1);
	Teacher t;
	t.display(s1);
	cout<<"Student Count:"<<Student::count<<endl;
	return 0;
}
