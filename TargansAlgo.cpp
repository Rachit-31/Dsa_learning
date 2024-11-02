#include <bits/stdc++.h>
using namespace std;

void dfs(int node, int parent, vector<int>& disc, vector<int>& low, unordered_map<int, bool>& vis, unordered_map<int, list<int>>& adj, vector<int>& ap, int& timer) {
    vis[node] = true;
    disc[node] = low[node] = timer++;
    int child = 0;

    for (auto nbr : adj[node]) {
        if (nbr == parent) continue;

        if (!vis[nbr]) {
            dfs(nbr, node, disc, low, vis, adj, ap, timer);
            low[node] = min(low[node], low[nbr]);

            // Check if the node is an articulation point
            if (low[nbr] >= disc[node] && parent != -1) {
                ap[node] = 1;
            }
            child++;
        } else {
            low[node] = min(low[node], disc[nbr]);
        }
    }

    // Special case for root node
    if (parent == -1 && child > 1) {
        ap[node] = 1;
    }
}

int main() {
    int n = 5;  // Number of nodes
    int e = 5;  // Number of edges
    unordered_map<int, list<int>> adj;
    vector<pair<int, int>> edges = {{0, 3}, {3, 4}, {0, 4}, {0, 1}, {1, 2}};

    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer = 0;
    vector<int> disc(n, -1), low(n, -1), ap(n, 0);
    unordered_map<int, bool> vis;

    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(i, -1, disc, low, vis, adj, ap, timer);
        }
    }

    // Print articulation points
    cout << "Articulation points are as follows:" << endl;
    for (int i = 0; i < n; i++) {
        if (ap[i] == 1) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
