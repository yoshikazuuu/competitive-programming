#include <iostream>
#include <algorithm> // for sort()
#include <cmath> // for gcd()

using namespace std;

int main() {
  int n;
  cin >> n;

  // Read in the array of integers
  long long a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Sort the array in ascending order
  sort(a, a + n);

  // Compute the GCD of the first and last elements of the array
  long long gcd = __gcd(a[0], a[n - 1]);

  // Print the sum of the GCDs
  cout << gcd + max_element(a, a+n) << endl;

  return 0;
}
