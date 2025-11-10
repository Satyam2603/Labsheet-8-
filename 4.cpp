#include <iostream>
using namespace std;

void copyString(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0') {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
}

int main() {
    char s1[100], s2[100];
    cin.getline(s1,100);
    copyString(s1,s2);
    cout << "Copied String: " << s2;
}
