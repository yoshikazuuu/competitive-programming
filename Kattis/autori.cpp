#include <iostream>
using namespace std;

int main() {
    char word[100];
    cin >> word;
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] <= 90 and word[i] >= 65) {
            cout << word[i];
        }
    }
}