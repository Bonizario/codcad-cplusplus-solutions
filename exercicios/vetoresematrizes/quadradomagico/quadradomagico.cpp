#include <iostream>

using namespace std;

int main() {
    int i, j, N, magico = 0;
    cin >> N;
    int A[N][N];
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    int linha = 0, coluna = 0, diagP = 0, diagS = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            linha += A[i][j]; // soma as linhas
            coluna += A[j][i]; // soma as colunas
            if (i == j) {
                diagP += A[i][j]; // soma a diagonal principal
            }
            if (i == N - 1 - j) {
                diagS += A[i][j]; // soma a diagonal secundaria
            }
        }
        if (linha == coluna) { // verifica para cada i se a linha é igual a coluna (acumula)
            continue;
        } else {
            magico++; // registra se alguma vez houve variacao
        } // algumas linhas podem estar diferentes mas no fim linha/N pode dar falso positivo
    } // por isso a necessidade de verificar a cada iteraçao
    if (diagP != diagS or diagP != linha/N) { // verifica se as diagonais são iguais entre si e iguais a linha media
        magico++;
    }
    if (magico == 0) {
        cout << linha/N << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
