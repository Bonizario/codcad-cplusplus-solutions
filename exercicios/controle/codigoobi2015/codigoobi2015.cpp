#include <iostream>

using namespace std;

int main() {
    int i, N, pattern = 0;
    cin >> N;
    int v[N];
    for (i = 0; i < N; i++) {
        cin >> v[i];
    }
    for (i = 0; i < N; i++) {
        if (i == 0 or i == N - 1) {
            continue;
        }
        if (v[i - 1] == 1 and v[i] == 0 and v[i + 1] == 0) {
            pattern++;
        }
    }
    cout << pattern << endl;
    return 0;
}
