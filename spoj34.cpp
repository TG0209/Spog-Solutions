#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main(){
	long long int test;
	cin>>test;
	while(test--){
		long long int x;
		cin>>x;
		long long int cards = (3*pow(x,2) + x)*(0.5);
		cout<<(cards%1000007)<<endl;
	}
}