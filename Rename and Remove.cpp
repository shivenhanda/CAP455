#include<iostream>
using namespace std;
#include<cstdio>

int main(){
	//rename file
	if(rename("createdfile.txt","FileCreated.txt")==0){
		cout<<"File Successfully Renamed"<<endl;
	}
	else{
		cout<<"File Rename Failed"<<endl;
	}
	
	//file delete
	if(remove("FileCreated.txt")==0){
		cout<<"File Deleted Successfully"<<endl;
	}
	else{
		cout<<"File Delete Failed"<<endl;
	}
	return 0;
}
