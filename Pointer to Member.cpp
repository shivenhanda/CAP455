
#include <iostream>
using namespace std;

class Item {
public:
    int price;

    Item(int p) : price(p) {}
};

int main() {
    Item item(150);

    int* p = &item.price;

    cout << "Item price: " << *p << endl;

    return 0;
}

