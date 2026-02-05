#include<iostream>
using namespace std;

int main(){
    int n =5, i,j,s;
    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            cout<<"  ";
        }
      for(j=1;j<=i;j++){

           cout<< " * ";
        }
        cout<<endl;
    }
    return 0;
}
