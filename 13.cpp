#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void inputPerson() {
        cin >> name >> age;
    }
};

class Student : public Person {
public:
    int marks;

    void inputStudent() {
        cin >> marks;
    }

    void display() {
        cout << name << " " << age << " " << marks;
    }
};

int main() {
    Student s;
    s.inputPerson();
    s.inputStudent();
    s.display();
}
