#include <iostream>
using namespace std;

int main() {

    int N1, N2;
    cin >> N1 >> N2;

    for(int num = N1; num <= N2; num++) {

        int temp = num;
        int count = 0;

        // Count digits
        for(int t = temp; t > 0; t = t / 10)
            count++;
        int sum = 0;
        temp = num;

        // Calculate Armstrong sum
        for(int t = temp; t > 0; t = t / 10) {

            int rem = t % 10;
            int p = 1;

            // power calculation
            for(int i = 0; i < count; i++)
                p = p * rem;
            sum = sum + p;
        }
        if(sum == num)
            cout << num << endl;
    }

    return 0;
}
