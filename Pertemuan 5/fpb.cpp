#include <iostream>
using namespace std;

void hitungFPB(int a, int b) {

    while (b != 0) {
        int sisa = a % b;
        a = b;
        b = sisa;
    }

    cout << "OUTPUT : FPB = " << a << endl;
}

int main() {
    int a, b;
    char ulang;

    do {
        cout << "INPUT  : ";
        cin >> a >> b;

        hitungFPB(a, b);

        cout << "Ingin input lagi? (y/n): ";
        cin >> ulang;

        cout << endl;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Program selesai." << endl;
}
