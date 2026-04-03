#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system ("cls");

    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        char huruf = 'A' + i; // menentukan huruf (A, B, C, ...)

        for (int j = 0; j <= i; j++) {
            cout << huruf;
        }
        cout << endl;
    }
}