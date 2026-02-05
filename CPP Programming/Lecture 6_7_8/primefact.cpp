#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the number";
    cin >> n;

    for(int i = 2; i <= n; i++) {
        while(n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }
    cout<<n<<endl;
    return 0;
}
