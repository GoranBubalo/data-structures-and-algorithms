#include <iostream>
#include <vector>
using namespace std;

// Learning bubble sort algorithm
int main() {
    int arr[] = {4,6,2,7,22,1,3,5,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n - 1; i++) {
        for( int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for(int num : arr) {
        cout << num << " ";
    }

    cout << endl;
    return 0;
}