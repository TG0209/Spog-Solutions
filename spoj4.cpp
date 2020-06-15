#include <iostream>

using namespace std;

long reverse(long n){
	int num=0;
	while(n>0){
		num = num*10 + n%10;
		n=n/10;
	}

	return num;
}

int main(){
	int test;
	cin>>test;
	while(test--){
		long x;
		cin>>x;
		while(1){
			x++;
			if(x==reverse(x))
				break;
		}
		cout<<x<<endl;
	}

}