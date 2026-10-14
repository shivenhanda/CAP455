#include <iostream>
using namespace std;
void modifyA(int &x) { x += 5; }
void modifyB(const int &x) { /* statement */ }
int main(){
	int a=10;
	modifyA(10);
	return 0;
}
