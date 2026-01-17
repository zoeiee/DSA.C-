/*#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the element " ;
        cin >> arr[i];
    }
    //selection sort
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        //swapping them actually:
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
return 0;
}*/
/*#include <iostream>
using namespace std;
void selection_sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    cout << "After selection sort, the array elements are:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[] = {12, 34, 5, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Before selection sort, the array elements are:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    //call
    selection_sort(arr, n);
    return 0;
}*/

