#include<iostream>
using namespace std;

int main() {
    int numbers[] = {8, 1, 4, 6, 2};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0; i < size - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < size; j++) {
            if(numbers[j] < numbers[minIndex]) {
                minIndex = j;
            }
        }

        int temp = numbers[i]; 
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = temp;
    }

    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}