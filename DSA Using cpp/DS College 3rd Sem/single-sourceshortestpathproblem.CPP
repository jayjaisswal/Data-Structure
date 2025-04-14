#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

typedef pair<int, int> pii; // (distance, node)

// Dijkstra function
void dijkstra(int start, vector<vector<pii>>& graph, int V) {
    vector<int> dist(V, INT_MAX);
    dist[start] = 0;

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int currentDist = pq.top().first;
        int currentNode = pq.top().second;
        pq.pop();

        // Traverse neighbors
        for (auto neighbor : graph[currentNode]) {
            int nextNode = neighbor.first;
            int weight = neighbor.second;

            if (dist[nextNode] > currentDist + weight) {
                dist[nextNode] = currentDist + weight;
                pq.push({dist[nextNode], nextNode});
            }
        }
    }

    // Print shortest distances
    for (int i = 0; i < V; i++) {
        cout << "Shortest distance from " << start << " to " << i << " is: " << dist[i] << endl;
    }
}
int main() {
    int V = 4; // Number of vertices
    vector<vector<pii>> graph(V);

    // Add edges: graph[from].push_back({to, weight});
    graph[0].push_back({1, 4});
    graph[0].push_back({2, 1});
    graph[2].push_back({1, 2});
    graph[1].push_back({3, 1});
    graph[2].push_back({3, 5});

    int start = 0;
    dijkstra(start, graph, V);

    return 0;
}
