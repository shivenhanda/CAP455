#include<iostream>
using namespace std;
#include<fstream>

int main(){
	ofstream file("createdfile.txt",ios::app);
	if(!file){
		cout<<"File not Open Successfully"<<endl;
		return 1;
	}
	file<<"\n Append Text";
	file.close();
	
	ifstream readfile("createdfile.txt");
	if(!readfile){
		cout<<"File not Open Successfully"<<endl;
		return 1;
	}
	string line;
	cout<<readfile.tellg();
	cout<<"without seekg";
	while(getline(readfile,line)){
		cout<<line<<endl;
	}
	readfile.seekg(2);
	cout<<readfile.tellg();
	cout<<"with seekg";
	while(getline(readfile,line)){
		cout<<line<<endl;
	}
	return 0;
}
