#include <iostream>

using namespace std;

int main() {
    unsigned short int i, j;
    unsigned int N, counter[10] = {0};
    string number;
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> number;
        for (j = 0; j < number.size(); j++) {
            if (number[j] == '0') {
                counter[0]++;
            } else if (number[j] == '1') {
                counter[1]++;
            } else if (number[j] == '2') {
                counter[2]++;
            } else if (number[j] == '3') {
                counter[3]++;
            } else if (number[j] == '4') {
                counter[4]++;
            } else if (number[j] == '5') {
                counter[5]++;
            } else if (number[j] == '6') {
                counter[6]++;
            } else if (number[j] == '7') {
                counter[7]++;
            } else if (number[j] == '8') {
                counter[8]++;
            } else {
                counter[9]++;
            }
        }
    }
    cout << "0 - " << counter[0] << endl;
    cout << "1 - " << counter[1] << endl;
    cout << "2 - " << counter[2] << endl;
    cout << "3 - " << counter[3] << endl;
    cout << "4 - " << counter[4] << endl;
    cout << "5 - " << counter[5] << endl;
    cout << "6 - " << counter[6] << endl;
    cout << "7 - " << counter[7] << endl;
    cout << "8 - " << counter[8] << endl;
    cout << "9 - " << counter[9] << endl;
    return 0;
}
