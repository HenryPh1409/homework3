//Henry-1123561
//11-12-2024

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to perform BFS traversal of the graph
vector<int> bfs_traversal(int V, vector<vector<int>> &adj_list) {
    vector<int> bfs_result;         
    vector<bool> visited(V, false); 
    queue<int> q;                   

    q.push(0);                      
    visited[0] = true;

    while (!q.empty()) {
        int node = q.front();       
        q.pop();
        bfs_result.push_back(node); 

        for (int neighbor : adj_list[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true; 
                q.push(neighbor);         
            }
        }
    }
    return bfs_result; 
}

int main() {
    vector<vector<int>> adj_list = {
        {1, 4},       // Node 0 is connected to nodes 1 and 4
        {0, 2, 3},    // Node 1 is connected to nodes 0, 2, and 3
        {1, 3},       // Node 2 is connected to nodes 1 and 3
        {1, 2, 4},    // Node 3 is connected to nodes 1, 2, and 4
        {0, 3}        // Node 4 is connected to nodes 0 and 3
    };

    vector<int> bfs_result = bfs_traversal(adj_list.size(), adj_list);

    for (int node : bfs_result) {
        cout << node << " ";
    }
    cout << endl;
    return 0;
}
