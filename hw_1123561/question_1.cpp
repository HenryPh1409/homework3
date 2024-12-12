// Henry-1123561
// 11-12-2024

#include <iostream>
#include <vector>
using namespace std;

// Function to create an adjacency list for an undirected graph
vector<vector<int>> createAdjacencyList(int V, vector<pair<int, int>>& edges) {
    vector<vector<int>> adjList(V);
    for (auto& edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    return adjList;
}

int main() {
    int V = 6; //have 6 value
    vector<pair<int, int>> edges = {{0, 1}, {0, 4}, {4, 1}, {4, 3}, {1, 3}, {1, 2}, {3, 2}, {5,3}, {5,4},{5,2}};
    vector<vector<int>> adjList = createAdjacencyList(V, edges);

    for (int i = 0; i < V; ++i) {
        cout << i << ": ";
        for (int neighbor : adjList[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}
