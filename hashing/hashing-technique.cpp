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
        cout << data << " data inserted successfully!" << endl;
    }
};

int main() {
    Hashtable h1(6);
    h1.insert(40);
    h1.insert(30);
}