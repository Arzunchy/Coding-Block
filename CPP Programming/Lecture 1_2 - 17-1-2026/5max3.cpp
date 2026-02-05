#include<iostream>
using namespace std;

int main(){
    int num1 = 10,num2 = 20,num3 = 30; 
    
    cout<<"enter  three numbers :";
    cin>> num1 >>num2 >>num3;

    int maxvalue;

    if (num1 >= num2 && num1 >=num3){
         maxvalue = num1;
    } else if(num1 >=num2&&num1 >=num3){
        maxvalue = num2;
    }else{
        maxvalue = num3;
    }
    cout<<"the maxvalue is :"<<maxvalue;
    return 0;



}