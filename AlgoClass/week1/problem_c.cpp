#include <iostream>

using namespace std;

int a, b, c;

int main(){
    cin >> a >> b >> c;
    if (a < 1 or b < 1 or c < 1 or a > 100 or b > 100 or c > 100){
        return 0;
    }

    if(a < b and b < c and a < c){
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}