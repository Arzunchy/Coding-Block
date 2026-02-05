#include <iostream>
using namespace std;

int main() {
    int n,oddSum,evenSum,digit=0;
    cin >> n;

    int pos = 1;
    while (n > 0) {
        digit = n % 10;

        if (pos % 2 == 1)
            oddSum += digit;
        else
            evenSum += digit;

        n = n / 10;
        pos++;
    }

    cout << oddSum<<endl;
    cout << evenSum<<endl;
}
