#include<iostream>
#include<vector>
using namespace std;

int main() {
    
    int row, cols;
    cout << "Enter the row and cols number: ";
    cin>>row>>cols;

    vector<vector<int>> arr(row, vector<int>(cols));

    cout << "Enter row element and column element: " <<endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<cols; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Rows and Columns : " <<endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }

}