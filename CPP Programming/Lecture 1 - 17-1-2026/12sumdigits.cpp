#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter number: ";
    cin >> n;

    for(; n > 0; n = n / 10) {
        sum = sum + (n % 10);  
    }

    cout << "Sum of digits " << sum;

    return 0;
}
