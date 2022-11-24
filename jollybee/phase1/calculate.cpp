#include <stdio.h>
#include <math.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
	ull sum = 0;
	int j;
	for (int i = 42069; i > 0; i--) {
		j = 42069 - i;
		sum += (2 * i * (i + 1) * j);
	}
	cout << sum << '\n';
	return 0;
}