#include<iostream>
#include<unordered_map>
using namespace std;

// hash table is something a little different thant hash map
// hash map (unordered) is just a dictionary which stores one element per one index
// table assigns multiple values at single index

int main() {
    unordered_map<int, int> hashmap;
    hashmap[0] = 30;
    hashmap[0] = 36;
    hashmap[4] = 40;
    hashmap[5] = 77;

    cout << hashmap[0];
}