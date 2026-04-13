#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int findKthSmallest(vector<int>& arr, int k) {
    // Build Min Heap from all elements
    priority_queue<int, vector<int>, greater<int>> minHeap(arr.begin(), arr.end());

    // Pop the smallest element k-1 times
    for (int i = 0; i < k - 1; i++) {
        minHeap.pop();
    }

    // The root is now the kth smallest element
    return minHeap.top();
}

int main() {
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;
    cout << "The " << k << "rd smallest element is: " << findKthSmallest(arr, k) << endl;
    return 0;
}
