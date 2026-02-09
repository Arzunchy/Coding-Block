//for the input and output from the user

#include<iostream>
using namespace std; 

int main(){
    int n, arr[100];
    cout<<"Enter the size of Array: "; // for the message what to do by the user
    cin>>n;
    for(int i=0; i<n; i++){    // for input
        cout<<"Index "<<i<<": ";// no need just for beauty
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){ // for output
        cout<<arr[i]<<endl;
    }
    return 0;
}

