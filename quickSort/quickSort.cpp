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

    int n = arr.size(); 
    cout<<"before sorting: ";
	for(int num : arr){
		cout<<num<<" ";
	}

    quickSort(arr, 0, n-1);

	cout<<endl<<"after sorting: ";
	for(int num : arr){
		cout<<num<<" ";
	}

	cout<<endl;
    return 0;
}