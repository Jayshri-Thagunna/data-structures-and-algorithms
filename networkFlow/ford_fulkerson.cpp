#include<iostream>
#include<vector>
#include<queue>
#include<stdlib.h>
#include<climits>

using namespace std;


int bfs(int source, int sink, vector<int>& parent, vector<vector<int>>& residualGraph) {
    fill(parent.begin(), parent.end(), -1);
    int v = residualGraph.size();
    parent[source] = -2;
    queue<pair<int, int>> q;
    q.push({source, INT_MAX});

    while(!q.empty()) {
        int u = q.front().first;
        int capacity = q.front().second;
        q.pop();

        for(int av = 0; av < v; av++) {
            if(u != av && parent[av] == -1 && residualGraph[u][av] != 0){
                parent[av] = u;
                int min_cap = min(capacity, residualGraph[u][av]);

                if(av == sink){
                    return min_cap;
                }
                q.push({av, min_cap});
            }
        }
    }
    return 0;
}

int ford_fukerson(vector<vector<int>>& graph, int source, int sink) {
    vector <int> parent(graph.size(), -1);
    vector<vector<int>> residualGraph = graph;
    int min_cap = 0, max_flow = 0;

    while(min_cap = bfs(source, sink, parent, residualGraph)) {
        max_flow += min_cap;
        int u = sink;

        while(u != source) {
            int v = parent[u];
            residualGraph[v][u] -= min_cap;
            residualGraph[u][v] += min_cap;
            u = v;
        }
    }
    return max_flow;

}

void addEdge(vector<vector<int>>& graph, int u, int v, int w) {
    graph[u][v] = w;
}

int main(){

    int v = 6;
    vector<vector<int>> graph (v, vector<int> (v, 0));

    addEdge(graph, 0, 1, 4);
    addEdge(graph, 0, 3, 3);
    addEdge(graph, 1, 2, 4);
    addEdge(graph, 2, 3, 3);
    addEdge(graph, 2, 5, 2);
    addEdge(graph, 3, 4, 6);
    addEdge(graph, 4, 5, 6);

    cout << "Maximum flow: " << ford_fukerson(graph, 0 , 5) <<endl;

    return 0;
}