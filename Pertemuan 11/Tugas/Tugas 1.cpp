#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

#define INF 1000000000

void dijkstra(int source, vector<vector<pair<int, int> > > &adj, vector<int> &dist) {
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
    dist[source] = 0;
    pq.push(make_pair(0, source));

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (size_t i = 0; i < adj[u].size(); ++i) {
            int v = adj[u][i].first;
            int weight = adj[u][i].second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
}

int main() {
    int n = 9; // Number of vertices
    vector<vector<pair<int, int> > > adj(n);

    // Add edges to the graph
    adj[0].push_back(make_pair(1, 4));
    adj[0].push_back(make_pair(7, 8));
    adj[1].push_back(make_pair(0, 4));
    adj[1].push_back(make_pair(2, 8));
    adj[1].push_back(make_pair(7, 11));
    adj[2].push_back(make_pair(1, 8));
    adj[2].push_back(make_pair(3, 7));
    adj[2].push_back(make_pair(5, 4));
    adj[3].push_back(make_pair(2, 7));
    adj[3].push_back(make_pair(4, 9));
    adj[3].push_back(make_pair(5, 14));
    adj[4].push_back(make_pair(3, 9));
    adj[4].push_back(make_pair(5, 10));
    adj[5].push_back(make_pair(2, 4));
    adj[5].push_back(make_pair(3, 14));
    adj[5].push_back(make_pair(4, 10));
    adj[5].push_back(make_pair(6, 2));
    adj[6].push_back(make_pair(5, 2));
    adj[6].push_back(make_pair(7, 1));
    adj[6].push_back(make_pair(8, 6));
    adj[7].push_back(make_pair(0, 8));
    adj[7].push_back(make_pair(1, 11));
    adj[7].push_back(make_pair(6, 1));
    adj[7].push_back(make_pair(8, 7));
    adj[8].push_back(make_pair(6, 6));
    adj[8].push_back(make_pair(7, 7));

    vector<int> dist(n, INF);
    int source = 0; // Source vertex

    dijkstra(source, adj, dist);

    cout << "Vertex\tDistance from Source\n";
    for (int i = 0; i < n; ++i) {
        cout << i << "\t" << dist[i] << "\n";
    }

    return 0;
}

