#include <iostream>
#include <algorithm>

using namespace std;

struct pais {
    unsigned short ouro, prata, bronze, id;
};

int ordenaPaises(pais a, pais b) {
    if (a.ouro != b.ouro) return a.ouro > b.ouro;
    if (a.prata != b.prata) return a.prata > b.prata;
    if (a.bronze != b.bronze) return a.bronze > b.bronze;
    return a.id < b.id;
}

int main () {
    unsigned short i, N, M, o, p, b;
    cin >> N;
    cin >> M;
    pais paises[N];

    for (i = 0; i < N; i++) {
        paises[i].ouro = 0;
        paises[i].prata = 0;
        paises[i].bronze = 0;
        paises[i].id = i + 1;
    }

    for (i = 0; i < M; i++) {
        cin >> o >> p >> b;
        paises[o - 1].ouro++;
        paises[p - 1].prata++;
        paises[b - 1].bronze++;
    }

    sort(paises, paises + N, ordenaPaises);
    for (i = 0; i < N; i++) {
        cout << paises[i].id << " ";
    }
    cout << "\n";
    return 0;
}
