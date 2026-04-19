#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

int main(){
    int nodes;
    cout << "Enter the no of nodes: ";
    cin >> nodes;

    vector<vector<int>> adj(nodes);
    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[1].push_back(2);
    adj[2].push_back(1);

    int edges;
    cout << "Enter the no of edges: ";
    cin >> edges;

    int u , v;
    cout << "Enter the pairs: ";
    for(int i = 0; i < edges; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}