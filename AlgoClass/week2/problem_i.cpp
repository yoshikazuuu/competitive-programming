#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
#include <ctype.h>
#include <algorithm>
using namespace std;

int main() {
    int isRunning = 1, counter = 1;

    while (isRunning) {
        char s[100];
        cin >> s;

        if (s[0] == '*') {
            isRunning = 0;
            break;
        }

        if (strcmp(s, "Umrah")) cout << "Case " << counter << ": " << "Hajj-e-Akbar\n";
        else cout << "Case " << counter << ": " << "Hajj-e-Asghar\n";
        
        counter++;
    }
}
