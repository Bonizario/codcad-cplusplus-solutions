#include <iostream>

using namespace std;

int eh_primo(int x) {
    unsigned int i;
    if (x <= 1) {
        return 0;
    }
    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int x;
    cin >> x;
    if (eh_primo(x)) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }
    return 0;
}
