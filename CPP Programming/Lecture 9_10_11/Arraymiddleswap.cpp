#include<iostream>
using namespace std;
int main(){
    int A[5]={4,3,7,9,11};
    int B[5]={5,10,17,9,3};
    int temp;
    for(int i=1;i<5-1;i++){ //start with 1 to 4 index 
        temp =A[i];
        A[i]=B[i];
        B[i]=temp;
    }
    for(int i=0;i<5;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl; // break the line 
    for(int i=0;i<5;i++){
        cout<<B[i]<<" ";
    }
    return 0;
    
} 
