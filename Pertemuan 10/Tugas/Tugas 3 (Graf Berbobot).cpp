#include <iostream>
#include <vector>

using namespace std;

struct Edge {
  int to; // simpul tujuan
  int weight; // bobot edge
};

struct Node {
  int id; // ID simpul
  vector<Edge> edges; // list edge yang keluar dari simpul ini
};

void printAdjacencyList(vector<Node>& graph) {
  cout << "Daftar Ketetanggaan (Graf Berbobot):" << endl;
  for (int i = 0; i < graph.size(); i++) {
    Node& node = graph[i];
    cout << "Simpul " << node.id << " : ";
    for (int j = 0; j < node.edges.size(); j++) {
      Edge& edge = node.edges[j];
      cout << "-> (" << edge.to << ", " << edge.weight << ") ";
    }
    cout << endl;
  }
}

int main() {
  vector<Node> graph(5);
  for (int i = 0; i < 5; i++) {
    graph[i].id = i;
  }

  graph[0].edges.push_back({1, 10});
  graph[0].edges.push_back({4, 20});

  graph[1].edges.push_back({2, 30});
  graph[1].edges.push_back({3, 40});
  graph[1].edges.push_back({4, 50});

  graph[2].edges.push_back({3, 60});

  graph[3].edges.push_back({4, 70});

  printAdjacencyList(graph);

  return 0;
}
