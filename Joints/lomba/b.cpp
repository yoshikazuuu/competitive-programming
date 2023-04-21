#include <iostream>
#include <vector>
#include <algorithm>

const long long MOD = 1000000007;

long long power(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) {
            res = res * a % MOD;
        }
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

int main() {
    long long N, M, K, Q;
    std::cin >> N >> M >> K >> Q;

    std::vector<std::pair<long long, long long> > instructions(Q);
    for (int i = 0; i < Q; i++) {
        std::cin >> instructions[i].first >> instructions[i].second;
    }

    std::sort(instructions.begin(), instructions.end());

    long long ans = 0;
    for (int i = 0; i < Q; i++) {
        long long l = instructions[i].first, r = instructions[i].second;
        long long non_favorites = M - K;
        long long pot_num = r - l + 1;
        long long ways = power(M, N - pot_num) * (power(non_favorites, pot_num) - 1) % MOD;

        ans = (ans + ways) % MOD;
    }

    ans = (ans + power(M, N)) % MOD;
    std::cout << ans << std::endl;

    return 0;
}
