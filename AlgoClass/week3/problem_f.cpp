#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; i++) if (n % i == 0) return false;
    return true;
}

int reverseDigits(int n) {
    string str = to_string(n);
    reverse(str.begin(), str.end());
    n = stoll(str);
    return n;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while (cin >> n) {
        bool ep = false, p = false;
        p = isPrime(n);
        int rn = reverseDigits(n);
        if (n != rn) ep = isPrime(rn);
        if (ep and p) cout << n << " is emirp.\n";
        else if (p) cout << n << " is prime.\n";
        else cout << n << " is not prime.\n";      
    }
    
    return 0;
}
