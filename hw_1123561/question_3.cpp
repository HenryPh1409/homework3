//Henry-1123561
//11-12-2024

#include <iostream>
#include <vector>
using namespace std;

// Helper function for recursive DFS
void dfs_helper(int node, vector<vector<int>> &adj_list, vector<bool> &visited, vector<int> &dfs_result) {
    visited[node] = true;
    dfs_result.push_back(node);

    for (int neighbor : adj_list[node]) {
        if (!visited[neighbor]) {
            dfs_helper(neighbor, adj_list, visited, dfs_result);
        }
    }
}

// Function to perform DFS traversal of the graph
vector<int> dfs_traversal(int V, vector<vector<int>> &adj_list) {
    vector<int> dfs_result;
    vector<bool> visited(V, false);

    dfs_helper(0, adj_list, visited, dfs_result);
    return dfs_result;
}

int main() {
    vector<vector<int>> adj_list = {
        {1, 3},       // Node 0 is connected to nodes 1 and 3
        {0, 2},       // Node 1 is connected to nodes 0 and 2
        {1, 4},       // Node 2 is connected to nodes 1 and 4
        {0, 4},       // Node 3 is connected to nodes 0 and 4
        {2, 3}        // Node 4 is connected to nodes 2 and 3
    };

    vector<int> dfs_result = dfs_traversal(adj_list.size(), adj_list);

    for (int node : dfs_result) {
        cout << node << " ";
    }
    cout << endl;
    return 0;
}
