#include <iostream>
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
}