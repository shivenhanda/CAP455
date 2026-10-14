#include <iostream>
using namespace std;

class Tracker {
    static int count;
public:
    Tracker() { count++; }
    static void print() {
        cout << count;
    }
};
int Tracker::count = 5;

int main() {
    Tracker t1, t2[3];
    Tracker::print();
    return 0;
}
