#include <iostream>
using namespace std;

int main() {
    int fr[1001] = {0};
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        fr[a]++;
    }
    int idmax = -1;
    int max = -1;
    for (int i = 0; i < 1001; i++) {
        if (fr[i] >= max) {max = fr[i]; idmax = i;}
    }
    cout << idmax;
}