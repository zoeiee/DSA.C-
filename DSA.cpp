#include <iostream>
using namespace std;

int isPrime(int x) {
    if(x < 2) return 0;
    for(int i = 2; i * i <= x; i++)
        if(x % i == 0) return 0;
    return 1;
}

int main() {
    int n, count = 0;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(isPrime(a[i])) count++;
    }

    cout << count;
    return 0;
}
