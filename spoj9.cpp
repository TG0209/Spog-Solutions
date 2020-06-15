#include <iostream>

using namespace std;

long long int zeros(long long int  n){
	long long int count = 0; 
  
    // Keep dividing n by powers of  
    // 5 and update count 
    for (int i = 5; n / i >= 1; i *= 5) 
        count += n / i; 
  
    return count; 
}

int main(){
	int test;
	cin>>test;
	while(test--){
		long long int n;
		cin>>n;
		cout<<zeros(n)<<endl;

	}
}