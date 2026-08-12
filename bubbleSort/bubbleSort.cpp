#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {

    int n = arr.size();

    for(int i = 0; i < n - 1; i++) {

        for(int j = 0; j < n - i - 1; j++) {

            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {

    vector<int> arr = {12, 5, 67, 3, -5, 36, 6};

    cout << "Before sorting: ";

    for(int num : arr) {
        cout << num << " ";
    }

    bubbleSort(arr);

    cout << "\nAfter sorting: ";

    for(int num : arr) {
        cout << num << " ";
    }

    return 0;
}