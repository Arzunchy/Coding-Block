#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int decimal = 0;
    int power = 1;   

    while(n > 0) {
        int rem = n % 10;      
        decimal += rem * power;
        power = power * 2;     
        n = n / 10;            
    }
    cout << decimal;
}
