#include <iostream>

using namespace std;

int main() {
    char C;
    unsigned int N;
    unsigned short int P, Q;
    cin >> N;
    cin >> P >> C >> Q;
    if (C == '+') {
        if ((P + Q) > N) {
            cout << "OVERFLOW" << endl;
        } else {
            cout << "OK" << endl;
        }
    } else {
        if ((P * Q) > N) {
            cout << "OVERFLOW" << endl;
        } else {
            cout << "OK" << endl;
        }
    }
    return 0;
}
