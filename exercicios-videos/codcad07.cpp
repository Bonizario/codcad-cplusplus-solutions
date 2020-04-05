#include <iostream>

using namespace std;

int main(){
  int x, i;
  cin >> x;
  i = 1;
  while (i <= x) {
    if (x % i == 0) {
        cout << i << " ";
    }
    i = i + 1;
  }
  return 0;
}
