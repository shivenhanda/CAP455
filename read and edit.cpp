#include<iostream>
using namespace std;
#include<fstream>

int main(){
	
	fstream file("createdfile.txt",ios::in | ios::out);
	
	cout << "file tellp: " << file.tellp() << endl;
	
	file.seekp(3);
	cout << "file change: " << file.tellp() << endl;
	
	file << "-Programming";
	file.close();
}
