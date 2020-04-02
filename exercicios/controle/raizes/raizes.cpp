#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double N, X;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> X;
        cout.precision(4);
        cout.setf(ios::fixed);
        cout << sqrt(X) << endl;
    }
    return 0;
}
