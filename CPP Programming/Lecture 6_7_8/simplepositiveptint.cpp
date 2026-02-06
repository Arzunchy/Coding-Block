#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    while(cin >> n) {      // keep reading input
        sum = sum + n;

        if(sum < 0) {
            break;         // stop when sum becomes negative
        }
        else {
            cout << n << endl;
        }
    }

    return 0;
}
//another
#include <iostream>
using namespace std;

int main() {
    int t,n;
	cin >> n;     
    cin >> t;
    int sum = 0;

    for(int i = 0; i < t; i++) {
        sum = sum + n;
        if(sum < 0) {
            break;
        }
        else {
            cout << n << endl;
        }
    }
}
