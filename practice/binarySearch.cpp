#include<iostream>
using namespace std;

int main() {
    int arr[] = {30, 40, 50 , 60 , 70, 80, 90, 100};
    int target = 50;

    int n = 8;
    int low = 0;
    int high = n - 1;

    while(low <= high) {
        int mid = low + (high - low)/2;

        // mid = target
        if(arr[mid] == target){
            cout << arr[mid];
            break;
        }

        // mid < target
        if(arr[mid] < target){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}