#include <iostream>

using namespace std;

string title(string F) {
    unsigned int i;
    if (F[0] > 'Z' or F[0] < 'A') {
        F[0] = toupper(F[0]);
    }
    for (i = 1; i < F.size(); i++) {
        if (F[i - 1] == ' ') {
            F[i] = toupper(F[i]);
        } else {
            F[i] = tolower(F[i]);
        }
    }
    return F;
}

int main(){
	string F;
	getline(cin, F);
	cout << title(F) << "\n";
	return 0;
}
