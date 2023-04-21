#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repz(i, a) rep(i, 0, a)
#define reprep(i, j, a, b) rep(i, 0, a) rep(j, 0, b)
#define inmat(name, n, p) reprep(i, j, n, p) cin >> name[i][j];
#define outmat(name, n, p)                                                     \
  repz(i, n) {                                                                 \
    repz(j, p) cout << name[i][j] << " ";                                      \
    cout << "\n";                                                              \
  }
#define invec(name, n) repz(i, n) cin >> name[i];
#define outvec(name, n) repz(i, n) cout << name[i] << " ";
#define mat(name, n, m) vector<vector<int>> name(n, vector<int>(m));

using namespace std;

vector<ll> harga;
vector<vector<ll> > graph;

void dfs(ll node, ll parent) {
  harga[node - 1] = min(harga[node - 1], harga[parent - 1]);
  ll i;
  for (auto i : graph[node]) {
    if (i != parent)
      dfs(i, node);
  }
}

void solve() {
  ll n, x;
  cin >> n >> x;
  repz(i, n) {
    ll m;
    cin >> m;
    harga.push_back(m);
  }

  graph.resize(n + 1);

  repz(i, n - 1) {
    ll a, b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  dfs(x, 0);

  outvec(harga, n - 1);
  cout << harga[n - 1];

  cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t = 1;
  // cin >> t;
  for (int i = 1; i <= t; i++)
    solve();

  return 0;
}