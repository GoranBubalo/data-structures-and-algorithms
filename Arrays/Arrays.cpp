#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 9, 2, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxNum = arr[0];
    
    for(int i = 0; i < n ; i++) {
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
        
    }

    cout << "The biggest number in array is: " << maxNum << endl;
    return 0;
}
