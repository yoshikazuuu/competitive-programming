#include <iostream>
#include <vector>

using namespace std;

int main() {
    int K;
    cin >> K;
    vector<int> x(K);
    for (int i = 0; i < K; i++) {
        cin >> x[i];
    }

    long long minN = 0, maxN = 0;
    for (int i = K - 1; i >= 0; i--) {
        minN = (minN + x[i] - 1) / x[i] * x[i];
        maxN = (maxN + x[i]) / x[i] * x[i] - 1;
    }

    if (minN > maxN) {
        cout << -1 << endl;
    } else {
        cout << minN << " " << maxN << endl;
    }

    return 0;
}
