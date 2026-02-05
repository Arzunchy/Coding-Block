#include <iostream>
using namespace std;

int main() {
    int rev=0,  N;
    cin >> N;

       while (N > 0) {
        int digit = N % 10;     
        rev = rev * 10 + digit;  
        N = N / 10;           
    }

    cout << rev;
}
