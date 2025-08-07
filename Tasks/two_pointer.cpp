#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findClosesPair(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() -1;

    int closestDiff = 1000000000;
    pair<int,int> result = {-1, -1};
    while(left < right) {
        int sum = arr[left] + arr[right];

        int diff = (sum - target < 0) ? -(sum - target) : (sum - target);
        if(diff < closestDiff) {
            closestDiff = diff;
            result = {arr[left], arr[right]};
        }
        
        if (sum < target) {
            left ++;
        } else {
            right --;
        }
    }

    return result;
}

int main() {

    vector<int> arr = {-10, -3, 0, 2, 4, 9, 13, 22};
    int target = 5;

    return 0; 
}
