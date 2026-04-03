#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system ("cls");
    int n, kuadrat, jumlah;

    while (true) {
        jumlah = 0;

        cout << "Masukkan angka: ";
        cin >> n;

        kuadrat = n * n;

        while (kuadrat > 0) {
            jumlah += kuadrat % 10;
            kuadrat /= 10;
        }

        if (jumlah == n) {
            cout << n << " adalah bilangan neon\n";
        } else {
            cout << n << " bukan bilangan neon\n";
        }
    }
}