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

const ll MAX_SIZE = 10000000;

vector<ll> isPrime(MAX_SIZE, true);
vector<ll> prime;
vector<ll> smallestPrimeFactor(MAX_SIZE);

void manipulated_sieve(int n) {

  isPrime[0] = isPrime[1] = false;

  for (ll i = 2; i < n; i++) {
    if (isPrime[i]) {
      prime.PB(i);
      smallestPrimeFactor[i] = i;
    }

    for (ll j = 0; j < (int)prime.size() and i * prime[j] < n and
                   prime[j] <= smallestPrimeFactor[i];
         j++) {
      isPrime[i * prime[j]] = false;
      smallestPrimeFactor[i * prime[j]] = prime[j];
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  manipulated_sieve(n);

  for (int i = 0; i < prime.size() && prime[i] <= n; i++) {
    cout << prime[i] << ' ';
  }

  return 0;
}