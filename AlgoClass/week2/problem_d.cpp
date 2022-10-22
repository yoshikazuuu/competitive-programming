#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    while (n--) {
        cin >> x;
        cout << abs(((x*567/9+7492)*235/47-498)/10)%10 << '\n';
    }
}
