#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;

    cout << "Enter a number: ";
    cin >> n;
    if(n==1||n==0){
        fact = 1;
    }

    for(int i = 1; i <= n; i++) {
        fact = fact * i;  
    }

    cout << fact;

    return 0;
}
