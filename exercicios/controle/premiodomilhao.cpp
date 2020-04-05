#include <iostream>

using namespace std;

int main() {
    int N, A, counter = 0,days = 0, acesses = 0;
    cin >> N;
    while (counter < N) {
        cin >> A;
        if (acesses < 1000000) {
            acesses = acesses + A;
            days = days + 1;
        }
        counter = counter + 1;
    }
    cout << days << "\n";
    return 0;
}
