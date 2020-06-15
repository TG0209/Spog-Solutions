#include <iostream>

using namespace std;

int reverse(int n){
	int num=0;
	while(n>0){
		num = num*10 + n%10;
		n = n/10;
	}

	return num;
}

int main(){
	int test;
	cin>>test;
	while(test--){
		int a,b;
		cin>>a>>b;
		cout<<reverse(reverse(a) + reverse(b))<<endl;;
	}
}