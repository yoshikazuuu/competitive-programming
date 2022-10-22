#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
#include  <ctype.h>
using namespace std;

string number[] = {"one", "two", "six", "four", "five", "nine", "three", "seven", "eight"};
int bruh[] = {1, 2, 6, 4, 5, 9, 3, 7, 8};

int main() {
    int n;
    cin >> n;

    while(n--) {
        string s;
        cin >> s;
        
        if (s.size() == 3) {
            for (int i = 0; i < 3; i++) {
                int counter = 0;
                for (int j = 0; j < 3; j++) {
                    if (s[j] == number[i][j]) counter++;
                }
                if (counter > 1) {
                    cout << bruh[i] << '\n';
                    break;
                }
            }
        }
        else if (s.size() == 4) {
            for (int i = 3; i < 6; i++) {
                int counter = 0;
                for (int j = 0; j < 4; j++) {
                    if (s[j] == number[i][j]) counter++;
                }
                if (counter > 2) {
                    cout << bruh[i] << '\n';
                    break;
                }
            }
        }
        else if (s.size() == 5) {
            for (int i = 6; i < 9; i++) {
                int counter = 0;
                for (int j = 0; j < 5; j++) {
                    if (s[j] == number[i][j]) counter++;
                }
                if (counter > 3) {
                    cout << bruh[i] << '\n';
                    break;
                }
            }
        }
    }
}
