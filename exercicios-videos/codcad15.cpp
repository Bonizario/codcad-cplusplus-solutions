#include <iostream>

using namespace std;

int soma(int N) {
    if (N == 1) {
        return 1;
    }
    return soma(N - 1) + N;
}

int main() {
    int N;
    cin >> N;
    cout << soma(N) << "\n";
    return 0;
}
