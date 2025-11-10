#include <iostream>
#include <cstring>
using namespace std;

int countWords(char str[]) {
    int count = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') count++;
    }
    return count;
}

int main() {
    char str[200];
    cin.getline(str,200);
    cout << "Total Words: " << countWords(str);
}
