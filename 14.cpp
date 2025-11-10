#include <iostream>
using namespace std;

class Calculator {
public:
    // Overloaded function for integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded function for doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator c;

    cout << "Addition of integers: " << c.add(10, 20) << endl;
    cout << "Addition of doubles: " << c.add(5.5, 2.3) << endl;

    return 0;
}
