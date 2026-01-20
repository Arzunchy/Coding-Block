
#include<iostream>
using namespace std;

int main(){
    int n =5, i,j,s,k;
    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            cout<<"  ";
        }
      for(j=1;j<=i;j++){

           cout<<"* ";
        }
        for(k=i-1;k>=1;k--){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

//another way
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        
        for(int s = 1; s <= n - i; s++) {
            cout << " ";
        }
        for(int j = 1; j <= (2*i - 1); j++) {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}


