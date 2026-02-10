#include<iostream>
using namespace std;
int main(){
    int A[5]={1,3,4,5,7};
    int B[3];
    int c[2];
    int j[5];
    int k=0;
    for(int i=0;i<3;i++){
        B[i]=A[i];
    }
    for(int i=0;i<2;i++){
        c[i]=A[i+3];
    }
    for(int i=0;i<2;i++){
        j[k++]=c[i];
    }
    for(int i=0;i<3;i++){
        j[k++]=B[i];
    }
    for(int i=0;i<5;i++){
        cout<<j[i];
    }
    return 0;

}