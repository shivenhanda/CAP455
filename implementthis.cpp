#include <iostream>
using namespace std;

class Student {
public:
    void display() {
        cout << this<<endl;
    }
};

int main() {
    Student s1, s2;

    s1.display();
    s2.display();

    return 0;
}
