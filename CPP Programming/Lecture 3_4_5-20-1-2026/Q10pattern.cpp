#include<iostream>
using namespace std;

int main(){
    int n =5, i,j,s,k;
    for(i=n;i>=1;i--){
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