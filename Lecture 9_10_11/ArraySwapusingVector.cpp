#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, temp;
    cout<<"enter the number : ";
    cin>>n;
    vector<int> arr1(n), arr2(n);//use for vector dynamic array (size decide at runtime)
   
    for(int i=0;i<n;i++){
        cin>> arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        int temp = arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
    for(int i=0;i<4;i++){
        cout<<arr1[i]<<" ";
    }
        for(int i=0;i<4;i++){
        cout<<arr2[i]<<"";
    }

    return 0;
}


// {1, 4, 5, 10}
// {5, 7, 3, 11}