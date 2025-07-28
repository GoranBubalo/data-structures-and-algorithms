#include <iostream>
using namespace std;

// Linear search 
int main() {
    int arr[] = {3, 7, 9, 1, 4, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x;
    cout << "Enter number to search: ";
    cin >> x;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << "Found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;
}