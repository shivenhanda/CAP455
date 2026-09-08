#include<iostream>
using namespace std;
void disp(int &y){
    y++;
    cout<<y<<endl;
}
int main(){
    int x=10;
    cout<<x<<endl;
    disp(x);
    cout<<x<<endl;
    return 0;
}