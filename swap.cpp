#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=3;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    a=a+b-(b=a);
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    return 0;
}