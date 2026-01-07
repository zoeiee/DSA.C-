#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;  // given value

    for (int i = 0; i < n; i++) {
        if (arr[i] > k) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
