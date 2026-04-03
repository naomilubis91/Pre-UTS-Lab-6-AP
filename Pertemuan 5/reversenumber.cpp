#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system ("cls");
    string input;

    while (true) {
        do {
            cout << "Masukkan 5 angka (tanpa spasi) : ";
            cin >> input;

            if (input.length() != 5) {
                cout << "Input harus 5 angka!\n";
            } // length() digunakan untuk menghitung jumlah karakter dalam string

        } while (input.length() != 5);

        cout << "Output: ";
        for (int i = 4; i >= 0; i--) {
            cout << input[i];
        }
        cout << endl;
    }
}