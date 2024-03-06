#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Graph class to represent the graph using adjacency lists
class Graph {
public:
    int vertices;
    vector<vector<int>> adjList;

    Graph(int V) : vertices(V), adjList(V) {}

    // Function to add an edge to the graph
    void addEdge(int src, int dest) {
        adjList[src].push_back(dest);
        adjList[dest].push_back(src); // For undirected graph
    }

    // Breadth-First Search
    void BFS(int start) {
        // Mark all vertices as not visited
        vector<bool> visited(vertices, false);

        // Create a queue for BFS
        queue<int> bfsQueue;

        // Mark the current node as visited and enqueue it
        visited[start] = true;
        bfsQueue.push(start);

        while (!bfsQueue.empty()) {
            // Dequeue a vertex from the queue and print it
            int currentVertex = bfsQueue.front();
            cout << currentVertex << " ";
            bfsQueue.pop();

            // Get all adjacent vertices of the dequeued vertex
            // If an adjacent vertex has not been visited, mark it as visited and enqueue it
            for (const auto &neighbor : adjList[currentVertex]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    bfsQueue.push(neighbor);
                }
            }
        }
    }
};

int main() {
    // Create a sample graph
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 5);

    // Perform BFS starting from vertex 0
    cout << "Breadth-First Search starting from vertex 0: ";
    g.BFS(0);

    return 0;
}
