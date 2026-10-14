#include <iostream>
using namespace std;

class Demo {
    int id;
public:
    Demo(int i) : id(i) { cout << id; }
    ~Demo() { cout << id; }
};

int main() {
    Demo d1(1);
    {
        Demo d2(2);
        Demo d3(3);
    }
    return 0;
}
