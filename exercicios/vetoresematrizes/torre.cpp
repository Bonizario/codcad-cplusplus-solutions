#include <iostream>

using namespace std;

int main() {
    int i, j, N, wafter, wbefore = 0;
    cin >> N;
    int board[N][N], lines[N], columns[N];
    for (i = 0; i < N; i++) {
        lines[i] = 0;
        for (j = 0; j < N; j++) {
            cin >> board[i][j];
            lines[i] += board[i][j];
        }
    }
    for (j = 0; j < N; j++) {
        columns[j] = 0;
        for (i = 0; i < N; i++) {
            columns[j] += board[i][j];
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            wafter = lines[i] + columns[j] - 2 * board[i][j];
            if (wafter > wbefore) {
                wbefore = wafter;
            }
        }
    }
    cout << wbefore << endl;
    return 0;
}
