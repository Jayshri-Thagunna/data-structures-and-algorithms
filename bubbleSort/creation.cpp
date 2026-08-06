#include<iostream>
#include<algorithm>
using namespace std;

int main() {

    //int arr[5] = {13, 23, 7, 12, 24};
    int n;
    cout << "Enter the size-";
    cin >> n;

    cout << "Eter the array- ";
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    delete[] arr;
    
}