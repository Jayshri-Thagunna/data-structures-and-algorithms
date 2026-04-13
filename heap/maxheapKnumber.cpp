#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int findKthSmallestMaxHeap(vector<int>& arr, int k) {
    priority_queue<int> maxHeap;

    for (int i = 0; i < arr.size(); i++) {
        maxHeap.push(arr[i]);
        
        // If heap size exceeds k, remove the largest element
        if (maxHeap.size() > k) {
            maxHeap.pop();
        }
    }
    // The top of the heap is the smallest of the largest elements seen
    return maxHeap.top();
}

int main() {
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;
    cout << k << "rd smallest is: " << findKthSmallestMaxHeap(arr, k) << endl;
    return 0;
}
