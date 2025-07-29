#include <iostream>
#include <vector>
using namespace std;

// Learning bubble sort algorithm
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}