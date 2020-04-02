#include <iostream>

using namespace std;

int main() {
    double a, b, resultado;
    cin >> a >> b;
    resultado = a / b;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << resultado << endl;
    return 0;
}
