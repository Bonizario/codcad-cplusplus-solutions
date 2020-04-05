#include <iostream>

using namespace std;

int main() {
    int N, V, before, points = 0, result = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> V;
        if (i == 0) {
            before = V;
            continue;
        }
        if (V == before and points != 0) {
            points += 1;
        } else if (V == before and points == 0) {
            points += 2;
        }
        if (V != before or i == N-1) {
            if (result < points) {
                result = points;
            }
            points = 0;
        }
        before = V;
    }
    cout << result << endl;
    return 0;
}
