#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;      // decimal input

    int binary = 0;
    int place = 1;

    while(n > 0) {
        int rem = n % 2;  //base of 2 binary
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }

    cout << binary;
    return 0;
}
//another
#include <iostream>
using namespace std;

int main() {

    int sb, db;
    int sn;

    cin >> sb;
    cin >> db;
    cin >> sn;

    // -------- Step 1 : source base → decimal ----------
    int decimal = 0;
    int power = 1;

    while(sn > 0) {
        int digit = sn % 10;
        decimal = decimal + digit * power;
        power = power * sb;
        sn = sn / 10;
    }

    // -------- Step 2 : decimal → destination base ----------
    int result = 0;
    int place = 1;

    while(decimal > 0) {
        int rem = decimal % db;
        result = result + rem * place;
        place = place * 10;
        decimal = decimal / db;
    }

    cout << result;
    return 0;
}

