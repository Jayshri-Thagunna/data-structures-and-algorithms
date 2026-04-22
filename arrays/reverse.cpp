#include<iostream>
#include<vector>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;


    vector<int>arr(size);
    
    for(int i = 0; i < size; i++){
        cout << "Enter the elements of the array: ";
        cin >> arr[i];
    }

    cout << "Orignal array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    int p1 = 0, p2 = size - 1;
    while(p1 <= p2) {
        swap(arr[p1], arr[p2]);
        p1 = p1 + 1;
        p2 = p2 - 1;
    }

    cout << endl;
    cout << "After reversing the array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}