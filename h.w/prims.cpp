#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Structure to represent a graph edge
struct Edge {
    int dest;
    int weight;
};

// Structure to represent a graph
class Graph {
public:
    int V; // Number of vertices
    vector<vector<Edge>> adjList; // Adjacency list to represent the graph

    // Constructor
    Graph(int vertices) : V(vertices), adjList(vertices) {}

    // Function to add an edge to the graph
    void addEdge(int src, int dest, int weight) {
        Edge edge1 = {dest, weight};
        Edge edge2 = {src, weight};
        adjList[src].push_back(edge1);
        adjList[dest].push_back(edge2);
    }

    // Function to find the minimum spanning tree using Prim's algorithm
    void primMST() {
        vector<bool> inMST(V, false); // To track whether a vertex is in MST or not
        vector<int> key(V, INT_MAX); // Key values used to pick minimum weight edge
        vector<int> parent(V, -1); // Array to store the constructed MST

        // Priority queue to store vertices along with their key values
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        // Start with the first vertex
        int src = 0;
        pq.push({0, src});
        key[src] = 0;

        // Loop to construct MST
        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            inMST[u] = true;

            // Update key values of adjacent vertices
            for (const Edge& edge : adjList[u]) {
                int v = edge.dest;
                int weight = edge.weight;

                if (!inMST[v] && weight < key[v]) {
                    key[v] = weight;
                    pq.push({key[v], v});
                    parent[v] = u;
                }
            }
        }

        // Print the constructed MST
        cout << "Edges in Minimum Spanning Tree:" << endl;
        for (int i = 1; i < V; ++i) {
            cout << "Edge: " << parent[i] << " - " << i << " Weight: " << key[i] << endl;
        }
    }
};

int main() {
    // Create a graph with 5 vertices
    Graph g(5);

    // Add edges to the graph
    g.addEdge(0, 1, 2);
    g.addEdge(0, 3, 6);
    g.addEdge(1, 2, 3);
    g.addEdge(1, 3, 8);
    g.addEdge(1, 4, 5);
    g.addEdge(2, 4, 7);
    g.addEdge(3, 4, 9);

    // Find and print the minimum spanning tree using Prim's algorithm
    g.primMST();

    return 0;
}
