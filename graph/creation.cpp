#include<iostream>
#include<vector>
using namespace std;

int main() {
    int nodes;
    cout << "Enter the no of nodes: ";
    cin >> nodes;

    vector<vector<int>>adj(nodes, vector<int>(nodes ,0));

    int edges;
    cout << "Enter the no of edges: ";
    cin >> edges;

    int s, d;
    cout << "Enter the pairs: ";

    int i;
    for(i = 0; i < edges; i++) {
        cin >> s >> d;
        adj[s][d] = 1;
        adj[d][s] = 1;
    }

    int j;
    for(i = 0; i < nodes; i++){
        for(j = 0; j < nodes; j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}