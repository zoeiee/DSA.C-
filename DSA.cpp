#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        int r = sqrt(a[i]);
        if (r * r == a[i])
            count++;
    }

    cout << count;
    return 0;
}
