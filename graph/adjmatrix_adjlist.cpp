#include <iostream>
#include <vector>

using namespace std;

class GraphMatrix {
private:
    int numVertices;
    vector<vector<int>> matrix;

public:
    GraphMatrix(int vertices) {
        numVertices = vertices;
        matrix.resize(vertices, vector<int>(vertices, 0));
    }

    void addEdge(int u, int v) {
        matrix[u][v] = 1;
        matrix[v][u] = 1; 
    }

    void printGraph() {
        for (int i = 0; i < numVertices; i++) {
            for (int j = 0; j < numVertices; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
};

class GraphList {
private:
    int numVertices;
    vector<vector<int>> adjList;

public:
    GraphList(int vertices) {
        numVertices = vertices;
        adjList.resize(vertices);
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); 
    }

    void printGraph() {
        for (int i = 0; i < numVertices; i++) {
            cout << i << ":";
            for (int neighbor : adjList[i]) {
                cout << " " << neighbor;
            }
            cout << "\n";
        }
        cout << "\n";
    }
};

int main() {
    int vertices = 4;

    GraphMatrix gMatrix(vertices);
    gMatrix.addEdge(0, 1);
    gMatrix.addEdge(0, 2);
    gMatrix.addEdge(1, 2);
    gMatrix.addEdge(2, 3);

    GraphList gList(vertices);
    gList.addEdge(0, 1);
    gList.addEdge(0, 2);
    gList.addEdge(1, 2);
    gList.addEdge(2, 3);

    gMatrix.printGraph();
    gList.printGraph();

    return 0;
}