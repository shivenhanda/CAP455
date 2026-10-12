#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream file;
	file.open("createdfile.txt");
	file<<"Welcome File Operations";
	file.write("\nC++",3);
	if(!file){
		cout<<"File cannot opened";
	}
	file.close();
	
	ifstream readfile;
	readfile.open("createdfile.txt");
	if(!readfile){
		cout<<"file path not correct"<<endl;
		return 0;
	}
	string line;
	while (getline(readfile, line)) {
	 cout<<line<<endl;
	}
	if(!readfile.is_open()){
		cout<<"Readfile cannot opened"<<endl;
	}
	readfile.close();
	
	ifstream readfile1("createdfile.txt");
	string word;
	while(readfile1>>word){
		cout<<word<<endl;
	}
	if(!readfile1.is_open()){
		cout<<"ReadFile1 cannot opened"<<endl;
	}
	readfile1.close();
}
