#include <iostream>

using namespace std;

int main(){
	int test;
	cin>>test;
	long long int sum=0;
	while(test--){
		long long int n;
		cin>>n;
		int y=n;
		while(n--){
			long long int x;
			cin>>x;
			sum += x%y;
		}
		if(sum%y==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		sum=0;
	}
}