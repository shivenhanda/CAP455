#include<iostream>
using namespace std;
#include<fstream>

int main(){
	ofstream file("studentmarks.txt");
	if(!file){
		cout<<"File not Found";
	}
	else{
	file<<10<<" "<<20<<" "<<30;
	}
	file.close();
	
	ifstream file1("studentmarks.txt");
	if(!file1){
		cout<<"File not Found";
		return 1;
	}
	int a,b,c;
	while(!(file1>>a>>b>>c)) return 1;
	cout<<a+b+c<<endl;
	cout<<(a+b+c)/3.0;
	file1.close();
	return 0;
}
