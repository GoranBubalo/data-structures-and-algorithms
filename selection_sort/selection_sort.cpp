#include <iostream>
using namespace std;

//Selection sort algorithm
int main() {
    int arr[] = {54,2,76,33,0,2,1,85}; //8 elements
    int n = sizeof(arr) / sizeof(arr[0]); // --> find the size of the array which is 8

    for(int i = 0; i < n - 1; i++) { 
        int minIndex = i; 

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j; // Update minIndex if a smaller element is found
            }
        }

         //swap elements 
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

   

    for(int num: arr) {
        cout << num << " "; // Print the sorted array
    }
    cout << endl;
    return 0;
}