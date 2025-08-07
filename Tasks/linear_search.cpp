#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i ++) {
        if(arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 30; // Element to search for

    int index = linearSearch(numbers, size, target);
    if(index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }
    return 0;
} 