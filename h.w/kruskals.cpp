#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Edge {
public:
    int source, destination, weight;
};

class Graph {
public:
    int V, E;
    vector<Edge> edges;

    Graph(int vertices, int edges) : V(vertices), E(edges) {}

    void addEdge(int source, int destination, int weight) {
        Edge edge;
        edge.source = source;
        edge.destination = destination;
        edge.weight = weight;
        edges.push_back(edge);
    }

    // Helper function for Union-Find operations
    int find(vector<int>& parent, int vertex) {
        if (parent[vertex] == -1)
            return vertex;
        return find(parent, parent[vertex]);
    }

    // Helper function to perform Union of two subsets
    void Union(vector<int>& parent, int x, int y) {
        int xSet = find(parent, x);
        int ySet = find(parent, y);
        parent[xSet] = ySet;
    }

    void kruskalMST() {
        // Sort edges in non-decreasing order of their weights
        sort(edges.begin(), edges.end(), [](Edge a, Edge b) {
            return a.weight < b.weight;
        });

        vector<int> parent(V, -1); // To track subsets

        cout << "Minimum Spanning Tree using Kruskal's Algorithm:\n";
        for (int i = 0; i < E; ++i) {
            int x = find(parent, edges[i].source);
            int y = find(parent, edges[i].destination);

            // If including this edge doesn't form a cycle, add it to the MST
            if (x != y) {
                cout << edges[i].source << " - " << edges[i].destination << "  Weight: " << edges[i].weight << "\n";
                Union(parent, x, y);
            }
        }
    }
};

int main() {
    int V = 4; // Number of vertices
    int E = 5; // Number of edges

    Graph graph(V, E);

    // Adding edges to the graph
    graph.addEdge(0, 1, 10);
    graph.addEdge(0, 2, 6);
    graph.addEdge(0, 3, 5);
    graph.addEdge(1, 3, 15);
    graph.addEdge(2, 3, 4);

    graph.kruskalMST();

    return 0;
}
