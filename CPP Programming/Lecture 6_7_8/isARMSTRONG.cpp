#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int temp = n;
    int digits = 0;
                      // Count digits
    while(temp > 0) {
        digits++;
        temp = temp / 10;
    }
    temp = n;
    int sum = 0;
                       // Calculate sum of powers
    while(temp> 0) {
        int rem = temp% 10;

        int power = 1;
        for(int i = 0; i < digits; i++) {
            power = power * rem;
        }
        sum = sum + power;
        temp = temp / 10;
    }
                      // Check Armstrong
    if(sum == n)
        cout << "true";
    else
        cout << "false";

    return 0;
}
