#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    float price;

    void input() {
        cin >> brand >> price;
    }

    void display() {
        cout << brand << " - " << price << endl;
    }
};

int main() {
    Car c1, c2;
    c1.input();
    c2.input();
    c1.display();
    c2.display();
}
