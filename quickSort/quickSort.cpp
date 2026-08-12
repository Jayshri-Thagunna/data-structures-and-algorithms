#include<iostream>
#include<vector>
using namespace std;

void quickSort(vector<int>&arr, int low, int high){
    if(low >= high){
        return;
    }

    int pivot = arr[(low+high)/2];

    int i = low;
    int j = high;


    while(i <= j){
        while(arr[i] < pivot){
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if(i <= j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

        quickSort(arr, low, j);
        quickSort(arr, i, high);
        
    }
}

int main() {
    vector<int> arr = {8, 3, 7, 4, 9, 2, 6};

    quickSort(arr, 0, arr.size() - 1);

    for(int x : arr) {
        cout << arr;
    }

    return 0;
}