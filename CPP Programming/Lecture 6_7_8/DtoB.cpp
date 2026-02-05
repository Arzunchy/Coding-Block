#include<iostream>
using namespace std;
int main (){
    int n=5,i,j;
    cin>>n;
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++){
        cout<<j*j<<" ";
    }
    cout<<n<<endl;
    return 0;
}

}