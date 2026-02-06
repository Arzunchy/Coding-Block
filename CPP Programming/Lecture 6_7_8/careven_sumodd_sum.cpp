#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;     // number of cars

    int n;

    for(int i = 0; i < t; i++) {

        cin >> n;

        int sum_even = 0;
        int sum_odd = 0;

        while(n > 0) {
            int rem = n % 10;   // take digit

            if(rem % 2 == 0)
                sum_even = sum_even + rem;
            else
                sum_odd = sum_odd + rem;

            n = n / 10;         // remove digit
        }

        if(sum_even % 4 == 0 || sum_odd % 3 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
