#include <iostream>

using namespace std;

int x1, y, x2;
int matriks1[101][101], matriks2[101][101], matriks3[101][101];

int main(){
    cin >> x1 >> y >> x2;
    for (int i = 0; i < x1; i++){
        for (int j = 0; j < y; j++){
            cin >> matriks1[i][j];
        }
    }

    for (int i = 0; i < y; i++){
        for (int j = 0; j < x2; j++){
            cin >> matriks2[i][j];
        }
    }

    for (int i = 0; i < x1; i++){
        for (int j = 0; j < y; j++){
            for (int k = 0; k < x2; k++){
                matriks3[i][k] += matriks1[i][j] * matriks2[j][k];
            }
        }
    }

    for (int i = 0; i < x1; i++){
        for (int j = 0; j < x2; j++){
            cout << matriks3[i][j];
            if (j < x2 - 1){
                cout << " ";
            } else {
                cout << "\n";
            }
        }
    }

}