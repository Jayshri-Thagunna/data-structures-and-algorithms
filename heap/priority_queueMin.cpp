#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    // Syntax for Min Heap: <Type, Container, Comparator>
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(30);
    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(5);

    // The smallest element will be at the top
    cout << "Smallest element: " << minHeap.top() << endl;

    cout << "All elements in Min Heap order: ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;

    return 0;
}
