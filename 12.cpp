#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount() { balance = 0; }

    void deposit(float amt) {
        balance += amt;
    }

    void withdraw(float amt) {
        if (amt <= balance) balance -= amt;
        else cout << "Insufficient Balance\n";
    }

    void show() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b;
    b.deposit(500);
    b.withdraw(200);
    b.show();
}
