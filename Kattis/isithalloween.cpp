#include <iostream>
using namespace std;

int main(){
    string tanggal;
    getline(cin, tanggal);
    if (tanggal == "OCT 31" or tanggal == "DEC 25") {
        cout << "yup\n";
    } else {
        cout << "nope\n";
    }
}