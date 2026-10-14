#include<iostream>
using namespace std;
#include<fstream>

int main(){
	ifstream file("createdfile.txt");
	if(!file){
		cout<<"File not found";
		return 1;
	}
	//read character
	char c;
	file.get(c);
	cout<<c;
	file.close();
	
	ofstream file1("createdfile.txt");
	file1.put('a');
	file1.close();
	
	return 0;
}
