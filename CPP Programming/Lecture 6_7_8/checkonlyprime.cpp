#include <iostream>
using namespace std;

int main() {
    int n,i,count=0;
    cin >> n;
    for(i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            count = 1;
            break;
        }
    }

    if(count == 0)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}
