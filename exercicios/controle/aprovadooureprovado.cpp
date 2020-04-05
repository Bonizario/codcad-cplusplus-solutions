#include <iostream>

using namespace std;

int main() {
    double A, B, mean;
    cin >> A >> B;
    mean = (A + B) / 2;
    if (mean >= 7) {
        cout << "Aprovado\n";
    } else if (mean < 7 and mean >= 4) {
        cout << "Recuperacao\n";
    } else {
        cout << "Reprovado\n";
    }
    return 0;
}
