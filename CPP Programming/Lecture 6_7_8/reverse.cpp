#include<iostream>
using namespace std;
int main() {
	int n,i,s,count=0;
    cin>>n,i,s,count;
    for(i=1;i<n;i++){
        s=3*n+2;
        if(s%n !=0){
            cout<<s<<endl;
            count++;
        }
    }
}    
	