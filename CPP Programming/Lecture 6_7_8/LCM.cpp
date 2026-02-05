#include <iostream>
using namespace std;
int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int LCM(int a, int b) {
    int gcd = GCD(a, b);
    return (a / gcd) * b; 
}

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    int lcm = LCM(N1, N2);
    cout << lcm;
}
