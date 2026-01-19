#include<iostream>
using namespace std;

int main(){
    int p,r,t,si;
    
    cout<<"enter the principal :";
    cin>> p;

    cout<<"enter the rate of interest of(%) :";
    cin>> r;

    cout<<"enter the time :";
    cin>> t;

    si = (p*r*t)/100;

    cout<<"the si is :"<<si;

    return 0;
}