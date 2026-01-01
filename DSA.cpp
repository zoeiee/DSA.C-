#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if (c >= 'a' && c <= 'z') {
        cout << "Lowercase";
    }
    else if (c >= 'A' && c <= 'Z') {
        cout << "Uppercase";
    }
    else if ( c >= '0' && c <= '9') {
        cout << "Digits";
    }
    else {
        cout << "Special character";
    }

}

