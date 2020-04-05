#include <iostream>

using namespace std;

int main() {
    int i, N;
    cin >> N;
    int fita[N];
    for (i = 0; i < N; i++) {
        cin >> fita[i];
    }
    for (i = 0; i < N; i++) {
        int j = i;
        int k = i;
        while (fita[i] == -1) {
            if (j < N) {
                j++;
                if (fita[j] == 0) {
                    fita[i] = j - i;
                    continue; // Vai para a proxima repeticao, a condicao do while nao eh satisfeita e o loop para
                }
            }
            if (k > 0) {
                k--;
                if (fita[k] == 0) {
                    fita[i] = i - k;
                    continue;
                }
            }
        }
        if (fita[i] > 9) { // Fora do loop para filtrar valores maiores que 9
            fita [i] = 9;
        }
        if (i != N - 1) { // Output formatado corretamente
            cout << fita[i] << " ";
        } else {
            cout << fita[i] << endl;
        }
    }
    return 0;
}
