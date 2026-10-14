#include<iostream>
using namespace std;
#include<fstream>

int main(){
	ofstream file("createdFile.txt");
	if(!file){
		cout<<"File not Found"<<endl;
	}
	file<<"Hello World";
	file.seekp(5);
	file<<"-";
	file.close();
	return 0;
}
