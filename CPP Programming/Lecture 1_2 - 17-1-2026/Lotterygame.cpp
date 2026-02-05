#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"enter the number:";
    cin>> n;


    if ( n>= 300 && n <= 460){
         cout<<"the prize is macbook";
    } else if(n >= 200 && n <= 280){
         cout<<"the prize is Kurkure";
    }else if (n >= 1100 && n<= 1500){
        cout<<"the prize is cycle";
    }else if(n >= 50 && n<= 80){
        cout<<"the prize is Bike";
    }else{
        cout<<"Better luck next time";
    }
    cout<<"n "<<n;
    return 0;



}