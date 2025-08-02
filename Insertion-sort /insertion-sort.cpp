#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &array) {
    int n = array.size();

    for(int i = 1; i < n; i++) {
        int key = array[i]; 
        int j = i - 1;

        while(j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }

    return;  
}

void insertionSortDescending(vector<int> &array) {
    int n = array.size(); 

    for (int i = 1; i < n; i++) {
        int key = array[i];
        int j = i - 1;

        while(j >=0 && array[j] < key){
            array[j + 1] = array[j];
            j--;    
        }

        array[j + 1] = key;
    }

    return;
}

void printArray(const vector <int> &array) {
    for(const int &element : array) {
        cout << element << " ";
    }
    cout << endl;

    return; 
}

int main() {
    vector<int> arr = {7, 3, 5, 2, 8, 1};
    cout << "Original array: ";
    printArray(arr);

    cout <<"vector array after insertion sort: ";
    insertionSort(arr);
    printArray(arr);

    cout << "Sorting arrays in descending order:";
    insertionSortDescending(arr);
    printArray(arr);

    return 0;
}