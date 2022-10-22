#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
#include <ctype.h>
#include <algorithm>
using namespace std;

int main() {
    int n, donation = 0;;
    cin >> n;
    getchar();
    
    while (n--) {
        string s;
        getline(cin, s);
        if (s[0] == 'd') {
            int buff;
            buff = stoi(s.substr(7, s.size()-7));
            donation += buff;
            // cout << donation << '\n';
        } else {
            cout << donation  << '\n';;
        }
    }
}
