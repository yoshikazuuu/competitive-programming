#include <iostream>
#include <vector>
using namespace std;

typedef int64_t i64;

i64 power_mod(i64 a, i64 b, i64 m) {
    a %= m;
    i64 result = 1;
    while (b > 0) {
        if (b & 1) result = result * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return result;
}

vector<int> calculate_routes(int n, int k) {
    vector<int> vis(n), routes(n), dist(n);
    vector<vector<int>> inbound(n);

    for (int i = 0; i < n; ++i) {
        if (vis[i]) continue;
        int current = i;
        while (!vis[current]) {
            vis[current] = true;
            int next = power_mod(current, k, n);
            if (next != current) inbound[next].push_back(current);
            current = next;
        }

        int distance = 0;
        while (dist[current] == 0) {
            dist[current] = distance++;
            routes[current] = power_mod(current, 100, n);
            current = inbound[current].empty() ? -1 : inbound[current].back();
        }
    }

    return routes;
}

i64 solve(int n, int k) {
    vector<int> routes = calculate_routes(n, k);
    i64 ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += routes[i];
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    cout << solve(n, k) << '\n';

    return 0;
}
