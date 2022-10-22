#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, total = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string x;
        int loc;
        cin >> x;
        for (int i = 0; x[i] != '\0'; i++) {
            loc = i;
        }
        int p = x[loc] - '0';
        x.pop_back();
        total += pow(stoi(x), p);
    }
    cout << total;
}