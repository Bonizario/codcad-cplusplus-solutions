#include <iostream>

using namespace std;

int main() {
    int A = 0, B = 0, N, I;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> I;
        if (I == 1) {
            A = 1 - A;
        } else {
            A = 1 - A;
            B = 1 - B;
        }
    }

    cout << A << "\n";
    cout << B << "\n";
    return 0;
}
