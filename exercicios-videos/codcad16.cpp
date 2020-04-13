#include <iostream>
#include <algorithm>

using namespace std;
/*
int main() {
    int v[5] = {4, 1, 2, 5, 3};
    // bubble sort (nao eh rapido)
    // usar para n <= 10^4 (demora +/- 1s)
    int ordenado = 0;
    while (ordenado == 0) {
        ordenado = 1;
        for (int i = 0; i < 4; i++) {
            if (v[i] > v[i + 1]) {
                ordenado = 0;
                int temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << v[i] << "\n";
    }
    return 0;
}
*/

int main() {
    int v[100000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v, v + n);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
    return 0;
}
