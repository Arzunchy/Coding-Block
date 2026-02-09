#include<iostream>
using namespace std;
int main (){
    int n,rev=0,digit;
    cin>>n;
    int num=n;
    while(n>0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    cout<<n;
    if(num==rev){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }

    return 0;
}