#include <iostream>

using namespace std;

int main() {
    int i, B, N;
    cin >> B >> N;
    while (B != 0 and N != 0) {
        int reservas[B]; // Vetor de reservas monetarias
        for (i = 0; i < B; i++) {
            cin >> reservas[i]; // Lendo as reservas de cada banco
        }
        for (i = 0; i < N; i++) { // Realizando as transacoes
            int d, c, v;
            cin >> d >> c >> v;
            reservas[d - 1] -= v;
            reservas[c - 1] += v;
        }
        int help = 0;
        for (i = 0; i < B; i++) {
            if (reservas[i] < 0) {
                help = 1;
            }
        }
        if (help == 0) {
            cout << "S\n";
        } else {
            cout << "N\n";
        }
        cin >> B >> N;
    }
    return 0;
}
