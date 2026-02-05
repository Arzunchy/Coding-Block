#include <iostream>
using namespace std;

int main() {
    int n,count=0;
    cin >> n;

      for (int i = 1; count < n; i++) {
        int s = 3 * i + 2;

        if (s % n != 0) {
            cout << s << endl;
            count++;
        }
    }
}
