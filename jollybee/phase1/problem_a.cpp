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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y, z, cone, mid;
    cin >> x >> y >> z;

    if (x > y) {
        cone = y;
        mid = x - y; 
    }
    else {
        cone = x;
        mid = y - x;
    }


    for (int i = 0; i < x; i++) {
        cout << ' ';
    }
    for (int i = 0; i < z+1; i++) {
        cout << '_';
    }
    cout << '\n';

    if (x > y) {
        for (int i = 0; i < cone; i++) {
            for (int j = 0; j < mid; j++) {
                cout << " ";
            }
            for (int j = cone - i; j > 1; j--) {
                cout << " ";
            }
            cout << "/";
            for (int j = 0; j < i * 2; j++) {
                cout << " ";
            }
            cout << "\\";
            if (i + 1 == y) {
                for (int j = 0; j < z; j++) {
                    cout << '_';
                }
            } 
            else {
                for (int j = 0; j < z; j++) {
                    cout << ' ';
                }
            }
            cout << "\\\n";
        }
    }
    else {
        for (int i = 0; i < cone; i++) {
            for (int j = cone - i; j > 1; j--) {
                cout << " ";
            }
            cout << "/";
            for (int j = 0; j < i * 2; j++) {
                cout << " ";
            }
            cout << "\\";
            if (i + 1 == y) {
                for (int j = 0; j < z; j++) {
                    cout << '_';
                }
            } 
            else {
                for (int j = 0; j < z; j++) {
                    cout << ' ';
                }
            }
            cout << "\\\n";
        }
    }

    

    if (x > y) {
        for (int k = 0; k < mid; k++) {
            for (int i = mid - k; i > 1; i--) {
                cout << " ";
            }
            cout << "/";
            for (int i = 0; i < (cone * 2) - 1 ; i++) {
                cout << " ";
            }
            cout << "/";
            for (int i = 0; i < z; i++) {
                cout << ' ';
            }
            cout << "/\n";
        }
    } else {
        
        for (int k = 0; k < mid; k++) {
            for (int i = 0; i < k; i++) {
                cout << " ";
            }
            cout << "\\";
            for (int i = 0; i < (cone * 2) - 1; i++) {
                cout << " ";
            }
            cout << "\\";
            if (k + 1 == mid) {

                for (int i = 0; i < z; i++) {
                cout << '_';
                }
            }
            else {

                for (int i = 0; i < z; i++) {
                    cout << ' ';
                }
            }
            cout << "\\\n";
        }
    }

    if (x > y) {

        for (int i = 0; i < cone; i++) {
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            cout << "\\";
            for (int j = 0; j < (cone - i - 1) * 2; j++) {
                cout << " ";
            }
            cout << "/";
            if (i + 1 == cone) {
                for (int j = 0; j < z; j++) {
                    cout << '_';
                }
            } 
            else {
                for (int j = 0; j < z; j++) {
                    cout << ' ';
                }
            }
            cout << "/\n";
        }
    }
    else {
        
        for (int i = 0; i < cone; i++) {
            for (int j = 0; j < mid; j++) {
                cout << " ";
            }
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            cout << "\\";
            for (int j = 0; j < (cone - i - 1) * 2; j++) {
                cout << " ";
            }
            cout << "/";
            if (i + 1 == cone) {
                for (int j = 0; j < z; j++) {
                    cout << '_';
                }
            } 
            else {
                for (int j = 0; j < z; j++) {
                    cout << ' ';
                }
            }
            cout << "/\n";
        }
    }

    
    return 0;
}