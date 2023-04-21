#include <bits/stdc++.h>
#define ll long long
#define INF 1000000000000000003
#define MOD 1e9 + 7

#define f(i, a, b) for (int i = a; i < b; i++)
#define fz(i, a) f(i, 0, a)
#define ffz(i, j, a, b) f(i, 0, a) f(j, 0, b)

#define vi vector<ll>
#define vin(name, n) fz(i, n) cin >> name[i];
#define vout(name, n) fz(i, n) cout << name[i] << " ";

using namespace std;

const int MAXN = 1e5 + 5;
vector<pair<int, int>> adj[MAXN];
int N, M;
vi players;

ll dfs(int node, int parent, int latency) {
    ll total_cost = 0;
    for (auto& edge : adj[node]) {
        if (edge.first != parent) {
            total_cost += dfs(edge.first, node, edge.second);
        }
    }

    if (players[node]) {
        total_cost += (ll)latency * players[node];
    }
    return total_cost;
}

int main() {
    cin >> N >> M;
    players.resize(N + 1, 0);

    fz(i, N - 1) {
        int U, V, W;
        cin >> U >> V >> W;
        adj[U].emplace_back(V, W);
        adj[V].emplace_back(U, W);
    }

    fz(i, M) {
        int P;
        cin >> P;
        players[P]++;
    }

    ll min_cost = dfs(1, 0, 0);
    cout << min_cost << endl;

    return 0;
}
