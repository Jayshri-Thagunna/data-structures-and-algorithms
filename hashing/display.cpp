#include<iostream>
#include<vector>
using namespace std;

class Hashtable{
    vector<vector<int>>table;
    int size;

    public:
    Hashtable(int size){
        this->size = size;
        table.resize(size);
    }

    //When i have to found the hash index
    int Hash(int data) {
        return data % size;
    }

    void insert(int data) {
        int index = Hash(data);
        table[index].push_back(data);
    }

    void display(){
        cout << "Hash Table: " <<endl;
        for(int i = 0 ; i < size; i++) {
            cout << i << " => ";
            for (int j = 0; j < table[i].size(); j++) {
                cout << table[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Hashtable h1(6);
    h1.insert(40);
    h1.insert(30);
    h1.insert(36);
    h1.insert(12);
    h1.insert(42);
    h1.insert(77);

    h1.display();
}