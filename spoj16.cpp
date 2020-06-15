#include <iostream>

using namespace std;

int main(){
	int test;
	int sum=0;
	cin>>test;
	while(test--){
		int x;
		cin>>x;
		if(x>0)
			sum+=x;
	}
	cout<<sum<<endl;
}