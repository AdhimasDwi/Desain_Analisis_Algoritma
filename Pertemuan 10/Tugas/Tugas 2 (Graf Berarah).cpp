#include <iostream>
#include <vector>

using namespace std;

// Struktur untuk mewakili simpul
struct Node {
  int data;
  vector<int> neighbors;
};

// Fungsi untuk menambahkan simpul ke grafik
void addNode(vector<Node>& graph, int data) {
  Node newNode;
  newNode.data = data;
  graph.push_back(newNode);
}

// Fungsi untuk menambahkan edge ke grafik
void addEdge(vector<Node>& graph, int from, int to) {
  graph[from].neighbors.push_back(to);
}

// Fungsi untuk mencetak daftar ketetanggaan grafik
void printAdjacencyList(const vector<Node>& graph) {
  cout << "Daftar Ketetanggaan (Graf Berarah) :" << endl;
  for (size_t i = 0; i < graph.size(); ++i) {
    cout << "Simpul " << graph[i].data << " :";
    for (size_t j = 0; j < graph[i].neighbors.size(); ++j) {
      cout << " -> " << graph[i].neighbors[j];
    }
    cout << endl;
  }
}

int main() {
  // Inisialisasi grafik
  vector<Node> graph;

  // Tambahkan simpul
  addNode(graph, 0);
  addNode(graph, 1);
  addNode(graph, 2);
  addNode(graph, 3);
  addNode(graph, 4);

  // Tambahkan edge
  addEdge(graph, 0, 1);
  addEdge(graph, 0, 4);
  addEdge(graph, 1, 2);
  addEdge(graph, 1, 3);
  addEdge(graph, 1, 4);
  addEdge(graph, 2, 3);
  addEdge(graph, 3, 4);

  // Cetak daftar ketetanggaan
  printAdjacencyList(graph);

  return 0;
}
