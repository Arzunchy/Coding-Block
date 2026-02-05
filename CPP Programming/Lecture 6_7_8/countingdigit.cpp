#include<iostream>
using namespace std;
int main(){
    int n,x,rem,count=0;
    cin>>n,x;
    while(n!=0){
        rem=n%10;
        if(rem==x){
            count++;
        }
        n = n/10;
    }
    cout<<count;
    return 0;
}