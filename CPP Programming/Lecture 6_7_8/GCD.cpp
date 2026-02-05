#include<iostream>
using namespace std;
int main(){
    int a=18,b=12;
    // cout<<"enter the number";
    // cin>>a>>b;
    while(b != 0){
        int temp=b;
        b= a%b;
        a= temp;
    }
    cout<<a;
    return 0;

}