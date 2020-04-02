#include <iostream>

using namespace std;

int main() {
    int i, N, bombas;
    cin >> N;
    int v[N];
    for (i = 0; i < N; i++) {
        cin >> v[i];
    }
    for (i = 0; i < N; i++) {
        bombas = v[i];
        if (i != 0) {
            bombas += v[i - 1];
        }
        if (i != N - 1) {
            bombas += v[i + 1];
        }
        cout << bombas << endl;
    }
    return 0;
}
