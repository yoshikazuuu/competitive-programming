#include <iostream>

using namespace std;

int x;

int main(){
    cin >> x;
    if (x < 1 and x > 100){
        return 0;
    }

    cout << x*x*x << "\n";
}