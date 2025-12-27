#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;
vector<int> cat;
int n, m;
int answer = 0;

void dfs(int node, int parent, int consecutive) {
    if (cat[node] == 1) consecutive++;
    else consecutive = 0;

    if (consecutive > m) return;

    bool isLeaf = true;
    for (int next : adj[node]) {
        if (next == parent) continue;
        isLeaf = false;
        dfs(next, node, consecutive);
    }

    if (isLeaf && node != 1) {
        answer++;
    }
}

int main() {
    cin >> n >> m;

    cat.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> cat[i];
    }

    adj.assign(n + 1, {});
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, -1, 0);

    cout << answer << "\n";
    return 0;
}
