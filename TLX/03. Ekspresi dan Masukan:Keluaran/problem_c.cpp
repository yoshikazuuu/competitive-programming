#include <cstdio>
#include <string>

using namespace std;

int main() {
    char a[100];

    scanf("%[^\n]\n", a);
    string s = a;
    printf("%s\n", s.c_str());
}