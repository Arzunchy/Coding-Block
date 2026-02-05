#include <iostream>
using namespace std;

int main() {
    int numRows;
    cin >> numRows;

    for(int i = 0; i < numRows; i++) {
        int val = 1;
        for(int j = 0; j <= i; j++) {
            cout << val << " ";
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}
