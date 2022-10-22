#include <iostream>
using namespace std;

int N, M;
int matriks[101][101];

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matriks[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = N - 1; j >= 0; j--) {
            cout << matriks[j][i];
            if (0 < j) {
                cout << " ";
            } else {
                cout << "\n";
            }
        }
    }

}