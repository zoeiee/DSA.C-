/*#include <iostream>
using namespace std;
int main() {
    int arr[4] = {45,76,12,39};
    int largest = arr[0];
    for (int i = 0; i < 4; i++) {
        if (arr[i]>largest) {
            largest = arr[i];
        }
    }
    cout << largest;
}*/

#include <iostream>
using namespace std;
int main() {
    int arr[] = {34,54,12,78};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int slargest = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest) {
            slargest = arr[i];
        }
    }
    cout << slargest << endl;
    cout << largest << endl;
}