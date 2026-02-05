#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	if(n==0){
		cout<<0;
	}
	else if(n==1){
		cout<<1;
	}
	int a=0, b=1, ans=0;
	for(int i=2; i<=n; i++){
		ans=a+b;
		a=b;
		b=ans;
	}
	cout<<ans;
	return 0;
}