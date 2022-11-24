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

vector<ll> isPrime (MAX_SIZE, true);
vector<ll> prime;
vector<ll> smallestPrimeFactor (MAX_SIZE);

void manipulated_sieve(int n) {
    //initialize that 0 and 1 are not prime
    isPrime[0] = isPrime[1] = false;

    //filling the rest of the entries
    for (ll i = 2; i < n; i++) {
        if (isPrime[i]) {
            prime.PB(i);
            smallestPrimeFactor[i] = i;
        }
        // Remove all multiples of  i*prime[j] which are
        // not prime by making isPrime[i*prime[j]] = false
        // and put smallest prime factor of i*Prime[j] as prime[j]
        // [ for exp :let  i = 5 , j = 0 , prime[j] = 2 [ i*prime[j] = 10 ]
        // so smallest prime factor of '10' is '2' that is prime[j] ]
        // this loop run only one time for number which are not prime
        for (ll j = 0;
             j < (int) prime.size() and
             i * prime[j] < n and prime[j] <= smallestPrimeFactor[i];
             j++)
        {
            isPrime[i * prime[j]] = false;
            smallestPrimeFactor[i * prime[j]] = prime[j];
        }
    } 

}

int main(){
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