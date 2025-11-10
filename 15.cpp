#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual float area() = 0;  // Pure virtual function
};

// Derived class: Circle
class Circle : public Shape {
    float radius;
public:
    Circle(float r) { radius = r; }

    float area() {
        return 3.14 * radius * radius;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
    float length, breadth;
public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    float area() {
        return length * breadth;
    }
};

int main() {
    Circle c(5);           // radius = 5
    Rectangle r(4, 6);     // length = 4, breadth = 6

    cout << "Area of Circle: " << c.area() << endl;
    cout << "Area of Rectangle: " << r.area() << endl;

    return 0;
}
