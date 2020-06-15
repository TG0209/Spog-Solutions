#include <iostream>

using namespace std;

int last(int a,int b){
	int d=a;
	if(b==0)
		return 1;
	else if(a%10==0)
		return 0;
	else{
		while(b>1){
			int prod = d*a;
			d = prod%10;
			b--;
		}
	}
	return d;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int a,b;
		cin>>a>>b;
		cout<<last(a,b)<<endl;
	}
}