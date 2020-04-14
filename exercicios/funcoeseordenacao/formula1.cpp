#include <iostream>
#include <algorithm>

using namespace std;

struct piloto {
    int colocacoes[100], pontos, id;
};

struct sistema {
    int podio, pontuacoes[100];
};

bool classificaPilotos(piloto a, piloto b) {
    if (a.pontos != b.pontos) return a.pontos > b.pontos;
    return a.id < b.id;
}

int imprimirPilotos(piloto pilotos[100]) {
    int y;
    for (y = 0; y < 99; y++) {
        if (pilotos[y + 1].pontos == pilotos[0].pontos) {
            cout << pilotos[y].id << " ";
        } else {
            cout << pilotos[y].id << "\n";
            return 0;
        }
    }
}

int main() {
    int i, j, G, P;

    int t, K, S;

    while (true) {
        cin >> G >> P;
        if (G == 0 && P == 0) break;
        piloto pilotos[100]; // criando vetor de struct (piloto)
        for (i = 0; i < G; i++) { // cada i é uma corrida
            for (j = 0; j < P; j++) { // cada j é um piloto no vetor de pilotos
                pilotos[j].id = j + 1;
                cin >> pilotos[j].colocacoes[i]; // adicionando colocação i para piloto j
            }
        }

        cin >> S;
        sistema sistemas[S]; // criando vetor de struct (sistema)
        for (i = 0; i < S; i++) {
            cin >> K;
            sistemas[i].podio = K; // definindo o limite de vencedores
            for (j = 0; j < K; j++) {
                cin >> sistemas[i].pontuacoes[j]; // adicionando todas as pontuações ao vetor dentro de sistema
            }
        }
        for (t = 0; t < S; t++) {
            for (i = 0; i < P; i++) {
                pilotos[i].pontos = 0; // a cada novo sistema, os pontos são resetados
                for (j = 0; j < G; j++) {
                    if (pilotos[i].colocacoes[j] <= sistemas[t].podio) { // verifica se a colocação está no pódio
                        pilotos[i].pontos += sistemas[t].pontuacoes[pilotos[i].colocacoes[j] - 1];
                    } // acessa o vetor de pontuacoes dentro de sistema[t] e adiciona a pontuação de index (colocações - 1) ao piloto[i]
                }
            }
            sort(pilotos, pilotos + P, classificaPilotos);

            imprimirPilotos(pilotos);
        }
    }
    return 0;
}
