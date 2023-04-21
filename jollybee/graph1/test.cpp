#include <bits/stdc++.h>
using namespace std;
// variabel
int n, k;
// array simpan grid
vector<vector<char> > arr;
// simpan value visited
vector<vector<bool> > vis;

// delta
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int dfs(int x, int y) {
  // mark now as visited
  vis[x][y] = true;
  // res = luas lake
  int res = 1;
  // traverse all adjacent point
  for (int i = 0; i < 4; i++) {
    // nx ny = next
    int nx = x + dx[i];
    int ny = y + dy[i];
    // case out of bound
    if (nx < 0 or nx >= n or ny < 0 or ny >= n) continue;
    // case visited or not water mango
    if (vis[nx][ny] or arr[nx][ny] != '.') continue;
    // pasti nx ny titik
    // maka kita tambahkan luas
    res += dfs(nx, ny);
  }
  return res; // return luas
}

// [1, 1, 1]
// resize 5
// [1, 1, 1, 0, 0]

// [1, 1, 1]
// assign 5, 0
// [0, 0, 0, 0, 0]



int main () {
  cin >> n >> k;
  arr.assign(n, vector<char>(n));
  vis.assign(n, vector<bool>(n)); // n * n
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  // simpan semua luas lake
  vector<int> lakes;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      // kalau air dan belum divisit
      if (arr[i][j] == '.' and vis[i][j] == false) {
        // luas kita masukkan ke vector
        lakes.push_back(dfs(i, j));
      }
    }
  }

  sort(lakes.begin(), lakes.end());
  // [1, 2, 2, 4, 6]

  int ans = 0;
  for (int i = 0; i < (int) lakes.size() - k; i++) {
    // buang sekian lake
    ans += lakes[i];
  }
  cout << ans << '\n';
    

}