#include <iostream>
using namespace std;

int main() {
    string pwd;
    cout << "Enter password: ";
    cin >> pwd;
    bool valid = pwd.length() >= 8;
    bool digit = false;
    for (char c : pwd) {
        for (char c : pwd) {
            if (c >= '0' && c <= '9') {
                digit = true;
                break;
            }
        }

        if (valid && digit)
            cout << "Password is valid\n";
        else
            cout << "Password is invalid\n";

        return 0;
    }

}