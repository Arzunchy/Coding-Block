#include<iostream>
using namespace std;

int main(){
    int n =5, i,j,s;
    for(i=n;i>=1;i--){
        for(s=0;s<=n-i;s++){
            cout<<"  ";
        }
      for(j=1;j<=i;j++){

           cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
