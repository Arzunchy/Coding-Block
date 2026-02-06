#include <iostream>
using namespace std;

int main() {
    int n; //we can use(long) coz of constraints or it works properly
    cin >> n;
	 int rem;
    int result = 0;
    int place = 1;

    // Special case if number itself is 0
    if(n == 0) {
        cout << 5;
        return 0;
    }
    while(n > 0) {
        rem = n % 10;        // take last digit

        if(rem == 0)
            rem = 5;         // replace 0 with 5

        result = result + rem * place;
        place = place * 10;

        n = n / 10;          // remove last digit
    }

    cout << result;
}
