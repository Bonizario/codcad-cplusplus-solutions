#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N, num_teste = 1;
    while (true) {
        cin >> N;
        if (N == 0) break;
        cout.precision(0);
        cout.setf(ios::fixed);
        cout << "Teste " << num_teste << "\n";
        cout << pow(2, N) - 1 << "\n\n";
        num_teste++;
    }
    return 0;
}

/*
SOLUÇÃO RECURSIVA OBTENDO TODOS OS MOVIMENTOS

int counter = 0;

int hanoi(int N, char orig, char dest, char aux) {
    if (N == 1) {
        counter++;
    }
    else {
        hanoi(N - 1, orig, aux, dest);
        counter++;
        hanoi(N - 1, aux, orig, dest);
    }
}

int main() {
    int N, num_teste = 0;
    while (true) {
        cin >> N;
        if (N == 0) break;
        hanoi(N,'A','B','C');
        cout << "Teste " << num_teste << "\n";
        cout << counter << "\n\n";
        num_teste++;
        counter = 0;
    }
    return 0;
}
*/
