#include <iostream>
#include <vector>

using namespace std;

class Graph {
private:
    vector<vector<int> > adjList;

public:
    Graph(int n) {
        adjList.resize(n);
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // Add this line to make it undirected
    }

    void printGraph() {
        for (int i = 0; i < adjList.size(); i++) {
            cout << "Simpul " << i << " : -> ";
            for (int j = 0; j < adjList[i].size(); j++) {
                cout << adjList[i][j];
                if (j < adjList[i].size() - 1) {
                    cout << " -> ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    Graph graph(5);
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

cout<<"Daftar Ketetanggaan (Graf Tidak Berarah) : ";
cout<<endl;
    graph.printGraph();

    return 0;
}
