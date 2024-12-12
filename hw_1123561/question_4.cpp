//Henry-1123561
//11-12-2024

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Disjoint Set Union class to manage connected components
class DisjointSetUnion {
public:
    DisjointSetUnion(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    int find(int u) {
        if (parent[u] != u) {
            parent[u] = find(parent[u]);
        }
        return parent[u];
    }

    void unionSets(int u, int v) {
        int rootU = find(u);
        int rootV = find(v);
        if (rootU != rootV) {
            if (rank[rootU] > rank[rootV]) {
                parent[rootV] = rootU;
            } else if (rank[rootU] < rank[rootV]) {
                parent[rootU] = rootV;
            } else {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
        }
    }

private:
    vector<int> parent;
    vector<int> rank;
};

int kruskal(int V, vector<vector<int>>& edges) {
    DisjointSetUnion dsu(V);
    sort(edges.begin(), edges.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[2] < b[2];
    });

    int mst_weight = 0;
    int mst_edges = 0;

    for (const auto& edge : edges) {
        int u = edge[0];
        int v = edge[1];
        int weight = edge[2];
        if (dsu.find(u) != dsu.find(v)) {
            dsu.unionSets(u, v);
            mst_weight += weight;
            mst_edges++;
            if (mst_edges == V - 1) {
                break;
            }
        }
    }

    return mst_weight;
}

int main() {
    int V = 4;
    vector<vector<int>> edges = {
        {0, 1, 3},
        {0, 2, 6},
        {0, 3, 4},
        {1, 3, 5},
        {2, 3, 4}
    };

    int mst_weight = kruskal(V, edges);
    cout << mst_weight << endl;

    return 0;
}

