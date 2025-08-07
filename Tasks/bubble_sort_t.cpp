#include <iostream>
using namespace std;

int main() {
    int numbers[] = {7, 3, 9, 2, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0; i < size - 1; i++) {
        for(int j = 0 ; j < size - i - 1; j++) {
            if(numbers[j] > numbers[j + 1]) {
                // Swap elements 
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    return 0; 
}