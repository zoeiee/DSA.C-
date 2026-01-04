#include <iostream>
using namespace std;

int main() {
    int n, temp, sum = 0, r;
    cin >> n;
    temp = n;

    while (temp != 0) {
        r = temp % 10;
        sum += r * r * r;
        temp /= 10;
    }

    if (sum == n)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}

