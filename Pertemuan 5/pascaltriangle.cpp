#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system ("cls");
    int n;
    
    cout << "Masukkan angka: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int angka = 1;

        for (int s = 0; s < n - i; s++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << angka << " ";
            angka = angka * (i - j) / (j + 1);
        }
        cout << endl;
    }
}