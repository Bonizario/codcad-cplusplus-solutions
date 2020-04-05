#include <iostream>

using namespace std;

int main() {
    unsigned short int i, N, points = 0;
    string correct, test;
    cin >> N;
    cin >> correct;
    cin >> test;
    for (i = 0; i < N; i++) {
        if (test[i] == correct[i]) {
            points++;
        }
    }
    cout << points << endl;
    return 0;
}
