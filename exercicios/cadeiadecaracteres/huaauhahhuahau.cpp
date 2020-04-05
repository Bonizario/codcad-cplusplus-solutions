#include <iostream>

using namespace std;

int main() {
    unsigned short i, K, funny = 1;
    string laugh, vowels = "";
    cin >> laugh;
    for (i = 0; i < laugh.size(); i++) {
        if (laugh[i] == 'a' or
            laugh[i] == 'e' or
            laugh[i] == 'i' or
            laugh[i] == 'o' or
            laugh[i] == 'u')
        {
            vowels += laugh[i];
        }
    }
    K = vowels.size() - 1;
    for (i = 0; i <= K; i++) {
        if (vowels[i] != vowels[K - i]) {
            funny = 0;
            break;
        }
    }
    if (funny == 0) {
        cout << "N\n";
    } else {
        cout << "S\n";
    }
    return 0;
}
