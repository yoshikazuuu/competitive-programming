#include <iostream>
#include <cmath>

using namespace std;

int num[1001][2] = {0};

int T(int x, int y, int d) {
    return pow(abs(num[x][0] - num[y][0]), d) + pow(abs(num[x][1] - num[y][1]), d);
}

int main() {
    int N, D;
    int maxT = -1, minT = 100000000;
    cin >> N >> D;

    for (int i = 0; i < N; i++) {
        cin >> num[i][0] >> num[i][1];
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int temp;
            temp = T(i, j, D);
            maxT = max(temp, maxT);
            minT = min(temp, minT);
        }
    }

    cout << minT << " " << maxT;
}