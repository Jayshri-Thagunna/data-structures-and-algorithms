#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> left, vector<int> right) {
    vector<int> result;
    int i = 0, j = 0;

    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            result.push_back(left[i]);
            i++;
        } else {
            result.push_back(right[j]);
            j++;
        }
    }
    
    while (i < left.size()) {
        result.push_back(left[i]);
        i++;
    }
    while (j < right.size()) {
        result.push_back(right[j]);
        j++;
    }

    return result;
}

vector<int> mergeSort(vector<int> arr) {
    if (arr.size() <= 1) return arr;

    int mid = arr.size() / 2;
    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());

    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}

int main() {
    int arr[] = {2, 6, 5, 10, 69, 54, 10, 23, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> vec(arr, arr + n);

    vector<int> sorted = mergeSort(vec);

    cout << "Sorted array: ";
    for (int x : sorted) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}