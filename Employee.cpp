#include<iostream>
using namespace std;
#include<fstream>
class Employee{
	private:
		int code;
		string EmployeeName;
	public:
		Employee(int c,string emp=" "){
			this->code=c;
			this->EmployeeName=emp;
		}
		void display(){
			cout<<"Employee Code:"<<code<<endl;
			cout<<"Employee Name:"<<EmployeeName<<endl;
		}
};
int main(){
	Employee emp1(101,"Shiven Handa"),emp2(102);
	fstream file;
	file.open("employee.txt",ios::binary | ios::in | ios::out);
	if(!file){
		ofstream filecreate("employee.txt",ios::app);
		filecreate.close();
		return 1;
	}
	else{
		file.write((char*)&emp1,sizeof(emp1));
		cout<<"File Creating...";
		file.seekg(0);
		file.read((char*)&emp1,sizeof(emp1));
	}
	file.close();
	return 0;
}
