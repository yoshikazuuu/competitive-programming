#include <bits/stdc++.h>
using namespace std;

typedef int64_t i64;
typedef int32_t i32;

#define MOD 1000000007
#define INF 1000177013
#define LLINF 4202025013666420666

int n;
vector<vector<int>> adj;
vector<int> visited;
vector<int> ord;

void dfs(int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
    ord.push_back(v);
}

void topological_sort() {
    visited.assign(n, false);
    ord.clear();
    for (int i = 0; i < n; ++i) {
        if (!visited[i])
            dfs(i);
    }
}

int dfz(int now, const vector<int>& p, int bos) {
    if (now == bos) return visited[now] = p[now];
    if (visited[now] != -1) return visited[now];
    int ret = 0;
    for (auto nx: adj[now]) {
        int snx = dfz(nx, p, bos);
        if (snx >= 1e9) {
            ret = max(ret, p[now] + snx);
        }
    }
    return visited[now] = ret;
}


void solve() {
    int m;
    cin >> n >> m;
    vector<int> p(n, 0);
    adj.assign(n, vector<int>());
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    for (int i = 0; i < m; ++i) {
        int fr, to;
        cin >> fr >> to;
        fr--, to--;
        adj[fr].push_back(to);
    }
    int us, bos;
    cin >> us >> bos;
    us--, bos--;
    int bozz = p[bos];
    p[bos] = 1e9;
    topological_sort();
    visited.assign(n, -1);
    for (auto st: ord) {
        dfz(st, p, bos);
    }
    int ret = dfz(us, p, bos);
    if (ret >= 1e9 and max(ret - (int)1e9, p[us]) > bozz) {
        ret -= 1e9;
        ret = max(ret, p[us]);
        cout << "YA " << ret << '\n';
    } else {
        cout << "TIDAK\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    for (int i = 0; i < tc; ++i) {
        solve();
    }
    return 0;
}