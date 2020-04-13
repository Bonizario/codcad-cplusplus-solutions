#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    int counter = 0, dolls[N], orderedDolls[N], collectedDolls[N] = {0};
    for (int i = 0; i < N; i++) {
        cin >> dolls[i];
        orderedDolls[i] = dolls[i];
    }

    sort(orderedDolls, orderedDolls + N);

    for (int i = 0; i < N; i++) {
        if (dolls[i] != orderedDolls[i]) {
            counter++;
            collectedDolls[i] = orderedDolls[i];
        }
    }
    cout << counter << "\n";
    sort(collectedDolls, collectedDolls + N);
    for (int i = 0; i < N; i++) {
        if (collectedDolls[i] != 0) {
            cout << collectedDolls[i] << " ";
        }
    }
    cout << "\n";

    return 0;
}
