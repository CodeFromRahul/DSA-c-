#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

// Structure to represent an edge in the graph
struct Edge {
    int to;
    int weight;
    
    Edge(int _to, int _weight) : to(_to), weight(_weight) {}
};

// Function to perform Dijkstra's algorithm
void dijkstra(const vector<vector<Edge>>& graph, int start, vector<int>& distance) {
    int n = graph.size();
    
    // Priority queue to store vertices based on their distance
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // Initialize distance array with infinity and set the distance of the start vertex to 0
    distance.assign(n, INF);
    distance[start] = 0;

    // Push the start vertex to the priority queue
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        int dist_u = pq.top().first;
        pq.pop();

        // If the distance to u is greater than the known distance, skip
        if (dist_u > distance[u]) continue;

        // Iterate through neighbors of u
        for (const Edge& edge : graph[u]) {
            int v = edge.to;
            int weight_uv = edge.weight;

            // Relaxation step
            if (distance[u] + weight_uv < distance[v]) {
                distance[v] = distance[u] + weight_uv;
                pq.push({distance[v], v});
            }
        }
    }
}

int main() {
    // Example graph represented as an adjacency list
    int n = 5; // Number of vertices
    vector<vector<Edge>> graph(n);

    // Adding edges to the graph
    graph[0].emplace_back(1, 2);
    graph[0].emplace_back(2, 4);
    graph[1].emplace_back(2, 1);
    graph[1].emplace_back(3, 7);
    graph[2].emplace_back(3, 3);
    graph[2].emplace_back(4, 1);
    graph[3].emplace_back(4, 5);

    // Starting vertex for Dijkstra's algorithm
    int start_vertex = 0;

    // Vector to store the minimum distances from the start vertex
    vector<int> distance;

    // Run Dijkstra's algorithm
    dijkstra(graph, start_vertex, distance);

    // Output the minimum distances from the start vertex
    cout << "Minimum distances from vertex " << start_vertex << ":\n";
    for (int i = 0; i < n; ++i) {
        cout << "Vertex " << i << ": " << distance[i] << '\n';
    }

    return 0;
}
