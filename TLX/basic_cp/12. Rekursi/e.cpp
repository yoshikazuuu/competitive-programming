#include <bits/stdc++.h>
#define ll long long
using namespace std;

string binary(int n) {
    if (n == 1) return "1";
    else if (n % 2 == 1) return binary(n/2) + "1";
    else return binary(n/2) + "0";
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;
    cout << binary(n) << '\n';

    return 0;
}