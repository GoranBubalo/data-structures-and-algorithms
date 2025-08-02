#include<iostream>
#include<vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int low = 0; 
    int hight = arr.size() - 1;

    while(low <=hight) {
        int mid =(low + hight) / 2;

        if(arr[mid] == target) {
            return mid;
        } else if(arr[mid] < target) {
            low = mid + 1;
        } else {
            hight = mid - 1;
        }
    }

    return -1;
}

int main() {
   vector<int> arr = {1, 3, 5, 7, 9, 11, 13}; 
   int target = 9;

   int resoult = binarySearch(arr, target);

   if (resoult != -1){
    cout << "Element found at index: " << resoult << endl;
   } else {
    cout << "Element not found in the array." << endl;
   }

   return 0; 
}