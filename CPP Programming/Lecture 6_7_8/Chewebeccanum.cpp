// for getting smaller digit or print the original digit with comparing 


#include <iostream>
using namespace std;

int main() {
    string n;//use for proper  step by step process(coz int cant store it)
    cin >> n;

    for(int i = 0; i < n.length(); i++) {

        int digit = n[i] - '0';  //convert the character into digit   
        int inv = 9 - digit;      //inverted digit   

       
        if(i == 0 && inv == 0) {
            continue;
        }
        if(inv < digit) {
            n[i] = inv + '0';
        }
        else {
            n[i] = digit + '0';
        }
    }

    cout << n;
}
