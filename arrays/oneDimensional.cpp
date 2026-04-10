#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);

    cout << "Enter the elements: " <<endl;

    for(int j=0; j<size; j++){
        cin>>arr[j];
    }

    cout <<"Array : " <<endl;

    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }

}