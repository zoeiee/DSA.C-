#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    bool ascending = true;
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            ascending = false;
            break;
        }
    }

    if(ascending)
        cout << "Array is sorted in ascending order";
    else
        cout << "Array is not sorted in ascending order";

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    bool desc = true;
    for(int i=1;i<n;i++)
        if(a[i] > a[i-1]) desc = false;

    cout << (desc ? "Descending" : "Not Descending");
}

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    cout << "Second largest element: " << arr[n - 2];

    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    sort(a, a+n);
    cout << a[1];
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    sort(a, a+n);
    cout << a[n-1] - a[0];
}





