#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<vector<vector<vector<int>>>> dats;
  dats.resize(26);
  for (int i = 0; i < 26; i++) {
    dats[i].resize(26);
    for (int j = 0; j < 26; j++) {
      dats[i][j].resize(0);
    }
  }
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string name;
    cin >> name;
    bool similar = false;
    int x = name[0] - 97;
    int y = name[name.size() - 1] - 97;
    for (int j = 0; j < dats[x][y].size(); j++) {
      if (dats[x][y][j][0] == name) {
        similar = true;
        break;
      }
    }

    if (!similar) {
      vector<int> temp;
      temp.push_back(name);
      temp.push_back(1);
      dats[x][y].push_back(temp);
      cout << "OK" << endl;
    } else {
      cout << dats[x][y][j][0] << dats[x][y][j][1] << endl;
      dats[x][y][j][1] += 1;
    }
  }
  return 0;
}
