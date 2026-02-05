#include<iostream>
using namespace std;

int main(){
    int marks; 
    cout<<"marks:";
    cin>> marks;


    if (marks >= 60 && marks <= 100){
         cout<<"grade=A";
    } else if(marks >= 40 && marks <= 80){
         cout<<"grade=B";
    }else{
        cout<<"grade = c";
    }
    cout<<"the marks is :"<<marks;
    return 0;



}