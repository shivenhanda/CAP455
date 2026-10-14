#include<iostream>
using namespace std;
#include<fstream>

int main(){
	//create file
	ofstream fileone("createdfile.txt",ios::out);
	fileone<<"C++ Programming File Handling";
	fileone.close();
	
	//read file
	ifstream readFile("createdfile.txt");
	string line;
	while(getline(readFile,line)){
		cout<<line<<endl;
	}
	readFile.close();
	
	//rewrite  file
	ofstream file("createdfile.txt",ios::out);
	cout<<"file tellp:"<<file.tellp()<<endl;
	file<<"C++ Programming File Handling";
	file.seekp(3);
	cout<<"file change:"<<file.tellp()<<endl;
	file<<"-Programming";
	file.close();
	
	//read file again
	ifstream readFile1("createdfile.txt");
	string line1;
	while(getline(readFile1,line1)){
		cout<<line1<<endl;
	}
	readFile1.close();
	return 0;
}
