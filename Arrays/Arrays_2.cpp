#include <iostream>
using namespace std;


// Reverse an array without creating a new array 
// two-pointer technique
int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Printing original array
    cout << "Original array: ";
    for(int i = 0; i < n ; i++) {
          cout << arr[i] << " ";
    }
    cout << endl;

    int start = 0; 
    int end = n - 1; 

    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers
        start++;
        end--;
    } 

     // Print reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}