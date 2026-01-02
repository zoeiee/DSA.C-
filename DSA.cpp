#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i * i <= n; i++) {
        if (i*i == n) {
            cout << n<< "is a perfect square";
        }


    }
    cout << "not a perfect square";
    return 0;
}