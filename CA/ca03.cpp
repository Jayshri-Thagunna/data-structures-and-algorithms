#include<iostream>
#include<vector>
using namespace std;

class Gmatrix {
    public:
    int numVertices;
    vector<vector<int>> matrix;

public:
    Gmatrix(int vertices) {
        numVertices = vertices;
        matrix.resize(vertices, vector<int>(vertices, 0));
    }

    void addEdge(int u, int v){
        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }

    void printMatrix() {
        for(int i = 0; i < numVertices; i++) {
            for(int j = 0; j < numVertices; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
};

class Glist {
    private:
        int numVertices;
        vector<vector<int>> adjList;

    public:
        Glist(int vertices) {
            numVertices = vertices;
            adjList.resize(vertices);
        }

        void addEdge(int u, int v) {
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        void printGraph() {
            for(int i =0; i < numVertices; i++){
                cout << i <<" : ";
                for(int n : adjList[i]) {
                    cout << " "<< n;
                }
                cout << endl;
            }
            cout << endl;
        }
};

int main() {
    int vertices = 4;
    
    Gmatrix gmatrix(vertices);
    gmatrix.addEdge(0,1);
    gmatrix.addEdge(0,2);
    gmatrix.addEdge(1,2);
    gmatrix.addEdge(2,3);

    Glist gList(vertices);
    gList.addEdge(0, 1);
    gList.addEdge(0, 2);
    gList.addEdge(1, 2);
    gList.addEdge(2, 3);

    gmatrix.printMatrix();
    gList.printGraph();

}