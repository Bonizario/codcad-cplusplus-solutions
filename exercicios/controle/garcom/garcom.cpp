#include <iostream>

using namespace std;

int main() {
    int N, L, C, brokenCups = 0, counter = 0;
    cin >> N;
    while (counter < N) {
        cin >> L >> C;
        if (L > C) {
            brokenCups = brokenCups + C;
        }
        counter = counter + 1;
    }
    cout << brokenCups << "\n";
    return 0;
}
