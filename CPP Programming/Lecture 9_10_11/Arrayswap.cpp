#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"enter the number : ";
    cin>>n;
    int A[100];
    int B[100];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        cin>>B[i];
    }
    for(int i=0;i<n;i++){
        temp = A[i];
        A[i]=B[i];
        B[i]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<A[i];
    }
    for(int i=0;i<n;i++){
        cout<<B[i];
    }
    return 0;    
}