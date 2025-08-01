#include <iostream>
using namespace std;


int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            cout << "Element found at index: " << i << endl;
            return i;
        }
    }
    
    return -1; 
}

// Linear search algorithm
int main() {
    int numbers[] = {54, 2, 76, 33, 0, 2, 1, 85}; // Array of numbers
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array
    int target = 2; 

    int index = linearSearch(numbers, size, target); // Call the linear search function

    if(index == -1) {
        cout << "Element not found in the array." << endl; // Element not found
    } else {
        cout << "Element " << target << " found at index: " << index << endl; // Element found
    }
}