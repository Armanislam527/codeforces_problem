#include <bits/stdc++.h>
using namespace std;

// --------------------- FAST I/O ---------------------
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)

// --------------------- TYPEDEFS ---------------------
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

// --------------------- MACROS -----------------------
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second
#define FOR(i,a,b) for (int i = a; i < b; ++i)

// --------------------- GLOBALS ----------------------
const int N = 1e5 + 5;   // Max number of nodes
vector<int> adj[N];      // Adjacency list
bool visited[N];         // Visited array for DFS/BFS

// --------------------- DFS --------------------------
void dfs(int node) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor);
        }
    }
}

// --------------------- BFS --------------------------
void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int curr = q.front(); q.pop();
        for (int neighbor : adj[curr]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

// --------------------- MAIN -------------------------
int main() {
    FAST_IO;

    int n, m;
    cin >> n >> m;  // n = nodes, m = edges

    FOR(i, 0, m) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u); // Remove this line if directed graph
    }

    // Example: run DFS from node 1
    dfs(1);

    return 0;
}
