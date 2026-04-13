#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MaxHeap {
    vector<int> heap;

    void heapifyDown(int index) {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < heap.size() && heap[left] > heap[largest])
            largest = left;
        if (right < heap.size() && heap[right] > heap[largest])
            largest = right;

        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

    void heapifyUp(int index) {
        if (index == 0) return;
        int parent = (index - 1) / 2;
        if (heap[index] > heap[parent]) {
            swap(heap[index], heap[parent]);
            heapifyUp(parent);
        }
    }

public:
    void insert(int val) {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    void deleteMax() {
        if (heap.empty()) return;
        heap[0] = heap.back();
        heap.pop_back();
        if (!heap.empty()) heapifyDown(0);
    }

    void display() {
        for (int val : heap) cout << val << " ";
        cout << endl;
    }
};

int main() {
    MaxHeap mh;
    mh.insert(30);
    mh.insert(20);
    mh.insert(10);
    mh.insert(5);

    cout << "Initial Heap: ";
    mh.display();

    mh.deleteMax();
    cout << "After Deleting Max: ";
    mh.display();

    return 0;
}
